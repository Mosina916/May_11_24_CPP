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


// int lenll(node*head){


// 	int co=0;
// 	node*temp=head;
// 	while(temp!=NULL){
// 		co++;
// 		temp=temp->next;
// 	}

// 	return co;
// }


int lenllrec(node*head){
	if(head==NULL){
		return 0;
	}

	return lenllrec(head->next)+1;
}
bool searchinll(node*head,int key){//70
		// 13 3 7 9 4

	while(head!=NULL){
	if(head->x==key){
		return true;

	}
	head=head->next;
}
return false;


}


bool searchinllrec(node*head,int key){
	if(head==NULL){
		return false;
	}



	if(head->x==key||searchinllrec(head->next,key)){
		return true;
	}

	return false;


}

void insertatanyposinbtw(node*head,node*tail,int pos,int data){

	if(pos==0){
		insertathead(head,tail,data);
	}
	else if(pos>=lenllrec(head)){
		insertattail(head,tail,data);
	}
	else{
		node*n=new node(data);
		node*temp=head;
		for (int i = 1; i <=pos-1; ++i)
		{
			temp=temp->next;
		}
		n->next=temp->next;
		temp->next=n;

	}

}


void deleteatanyposinbtw(node*head,node*tail,int pos){

	if(pos==0){
		deleteathead(head,tail);
	}
	else if(pos>=lenllrec(head)-1){
		deleteattail(head,tail);
	}
	else{

		node*temp=head;
		for (int i = 1; i <=pos-1; ++i)
		{
			temp=temp->next;
		}
		node*p=temp->next;//
		temp->next=p->next;
		delete p;
		p=NULL;
		

	}

}

int main(){
	node*head=NULL;
	node*tail=NULL;

	// int n;
	// cin>>n;//5
	// for (int i = 0; i <n; ++i)
	// {
	// 	int d;
	// 	cin>>d;
	// 	insertathead(head,tail,d);
	// }



	insertathead(head,tail,17);
	insertathead(head,tail,13);
	insertathead(head,tail,8);

	insertathead(head,tail,3);
	insertathead(head,tail,5);

	insertatanyposinbtw(head,tail,3,80);
	printll(head);
	cout<<endl;

	deleteatanyposinbtw(head,tail,4);
	printll(head);
	// 13 3 7 9 4
	// int key;
	// cin>>key;
	// // cout<<searchinll(head,key)<<endl;

	// cout<<searchinllrec(head,key)<<endl;

	// cout<<lenllrec(head)<<endl;


	// printll(head);


	
	


	return 0;
}