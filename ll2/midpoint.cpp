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


void printll(node*&head){//ox..400

	node*temp=head;
	while(temp!=NULL){
	cout<<temp->x<<" ";//3
	temp=temp->next;
}

	

}



int lenllrec(node*head){
	if(head==NULL){
		return 0;
	}

	return lenllrec(head->next)+1;
}


node* midpoint(node*head){
	node* slow=head;
	// node*fast=head;
	node*fast=head->next;

	while(fast!=NULL && fast->next!=NULL){//segmentation fault
	slow=slow->next;
	fast=fast->next->next;//null
}


return slow;
}


void bubbblesort(node*head){
	for(int i=1;i<=lenllrec(head)-1;i++){
		for(node*temp=head;temp->next!=NULL;temp=temp->next){ //optimization
			if(temp->x>temp->next->x){
				swap(temp->x,temp->next->x);


			}
		}
	}
}

node* kthnodefromtend(node*head,int k){//5
	node* s=head;
	node*f=head;
	for (int i = 1; i <=k-1; ++i)
	{
		f=f->next;
	}
	while(f->next!=NULL){
	s=s->next;
	f=f->next;
}

return s;

}

int main(){
	node*head=NULL;
	node*tail=NULL;

	int n;
	cin>>n;//5
	for (int i = 0; i <n; ++i)
	{
		int d;
		cin>>d;
		insertattail(head,tail,d);
	}
	printll(head);
	// cout<<endl;
	// bubbblesort(head);
	// printll(head);

	// int k;
	// cin>>k;

	// // k<=lengthofll

	// node*e=kthnodefromtend(head,k);

	// cout<<e->x<<endl;

	// node*u=midpoint(head);
	// cout<<u->x<<endl;



	


	return 0;
}