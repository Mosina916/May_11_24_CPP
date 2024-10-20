#include<iostream>
using namespace std;
class node{
public:
	int d;
	node* next;
	node(int data){
		d=data;
		next=NULL;
	}
};


void insertatail(node*&head,node*&tail,int data){
	if(head==NULL and tail==NULL){
		node*ptr=new node(data);
		head=ptr;
		tail=ptr;
	}
	else{
		node*ptr=new node(data);
		tail->next=ptr;
		tail=ptr;

	}

}


void printll(node*head){
	while(head!=NULL){
	cout<<head->d<<" ";//30 4 3
	head=head->next;
}

}


int lengthllrec(node*head){
	// base case
	if(head==NULL){
		return 0;
	}
	// rec case
	return lengthllrec(head->next)+1;


}

node* midpointofll(node*head){
	node*temp1=head;
	node*temp2=head;

	while(temp1->next!=NULL){
	temp1=temp1->next->next;//2x
	temp2=temp2->next;
}

return temp2;


}


int main(){

	node* head=NULL;//sma
	node*tail=NULL;//sma

	int n;
	cin>>n;//5
	for (int i = 0; i <n; ++i)
	{
		int data;
		cin>>data;
			insertatail(head,tail,data);

	}



	node*x=midpointofll(head);
	cout<<x->d<<endl;



	printll(head);
	





	return 0;
}