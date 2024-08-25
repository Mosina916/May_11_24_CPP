#include<iostream>
using namespace std;
class node{
	public:
	int x;
	node*next;

	node(int d){
		next=NULL;
		x=d;
	}
};

void insertathead(node*&head,node*&tail,int d){
	// int a;
	// int*pre=new int;
	node*n=new node (d);
	if(head==NULL){
	head=n;
	tail=n;
	}
	else{
		n->next=head;
		head=n;
	}

}



void insertattail(node*&head,node*&tail,int d){

	node*n=new node (d);
	if(head==NULL){
	head=n;
	tail=n;
	}
	else{
		tail->next=n;
		tail=n;
		
	}

}



void deleteathead(node*&head,node*&tail){

	if(head==NULL){
		// ll empty
		return;
	}
	else if(head->next==NULL){
		// single node
		delete head;
		head=NULL;
		tail=NULL;
	}
	else{
		node*temp=head;//ox..400
		head=head->next;//0x..200
		delete temp;
		temp=NULL;

	}


}

void deleteattail(node*&head,node*&tail){

	if(head==NULL){
		// ll empty
		return;
	}
	else if(head->next==NULL){
		// single node
		delete head;
		head=NULL;
		tail=NULL;
	}
	else{
		node*temp=head;
		while(temp->next!=tail){
			temp=temp->next;
		}
		delete tail;
		tail=temp;
		tail->next=NULL;

	}


}

void printll(node*&head){//ox..400
	// while(head!=NULL){
	// 	cout<<head->x<<" ";//3 7 9 4
	// head=head->next;//null


	// }

	node*temp=head;
	while(temp!=NULL){
	cout<<temp->x<<" ";//3
	temp=temp->next;
}

	

}

int main(){
	node*head=NULL;
	node*tail=NULL;



	insertathead(head,tail,4);
// head-->ox..700,tail-->ox..700
	insertathead(head,tail,9);
	 // head-->ox..350,tail-->ox..700
	insertathead(head,tail,7);

	 // head-->ox..200,tail-->ox..700

	insertathead(head,tail,3);

	 // head-->ox..400,tail-->ox..700

		insertattail(head,tail,90);
		insertattail(head,tail,80);

		deleteathead(head,tail);

		insertathead(head,tail,39);

		deleteattail(head,tail);
		deleteattail(head,tail);


		insertathead(head,tail,19);
		insertathead(head,tail,29);
		insertathead(head,tail,49);



	printll(head);


	
	


	return 0;
}