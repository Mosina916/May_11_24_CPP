#include<iostream>
using namespace std;
class node{
	public:
	int x;
	node*next;
	node*prev;

	node(int d){
		next=NULL;
		prev=NULL;
		x=d;
	}
};
void inseetindllattail(node*&head,node*&tail,int d){
	node*n=new node(d);
	if(head==NULL ){
		head=n;
		tail=n;
	}
	else{
		tail->next=n;
		n->prev=tail;
		tail=n;
	}
}


int main(){
	node*head=NULL;
	node*tail=NULL;

	inseetindllattail(head,tail,8);
	inseetindllattail(head,tail,7);
	inseetindllattail(head,tail,3);




	return 0;
}