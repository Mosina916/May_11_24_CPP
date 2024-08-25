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

node* reversell(node*head){

	node*curr=head;
	node*prev=NULL;

	while(curr!=NULL){
		node*agagekan=curr->next;
		curr->next=prev;
		prev=curr;
		curr=agagekan;
	}

	return prev;
}

node* mergetwosortedll(node*head1,node*head2){
	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}
	node*newhead=NULL;
	if(head1->x>head2->x){
		newhead=head2;
		newhead->next=mergetwosortedll(head1,head2->next);
		// return newhead;
	}
	else{
		newhead=head1;

		newhead->next=mergetwosortedll(head1->next,head2);
		// return newhead;
	}

	return newhead;
}

node* mergesort(node*head){
	if(head==NULL){
		return head;
	}

	if(head->next==NULL){
		return head;
	}
	


	node*m=midpoint(head);//5 3 4 2 1

	node*temp=m->next;
	m->next=NULL;
	node*y=mergesort(head);//3 4 5
	node*z=mergesort(temp);//1 2
	return mergetwosortedll(y,z);//1 ka addess 1 2 3 4 5
}

// 4 3 5 2 6 7 3 9 10
// 5 3 4 7 6 2 10 9 3
node* kreverse(node*head,int k){
	if(head==NULL){
		return NULL;
	}
	node*temp=head;
	for (int i = 1; i <=k-1; ++i)
	{
		temp=temp->next;//5
	}
	node*x=temp->next;//2
	temp->next=NULL;
	node*p=reversell(head);//5 ka addess
	node*z=kreverse(x,k);//7

	node*a=p;
	for(int i=1;i<=k-1;i++){
		a=a->next;
	}
	a->next=z;

	return p;

}

int main(){
	node*head=NULL;
	node*tail=NULL;

	int m;
	cin>>m;//5
	for (int i = 0; i <m; ++i)
	{
		int d;
		cin>>d;
		insertattail(head,tail,d);//5 3 4 2 1
	}
	printll(head);
	// cout<<endl;
	// node*r=reversell(head);
	int k;
	cin>>k;
	node*r=kreverse(head,k);
	printll(r);

	return 0;
}