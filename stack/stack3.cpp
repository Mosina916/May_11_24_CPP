#include<iostream>
#include <vector>
using namespace std;
class node{
public:
	int d;
	node*next;
	node(int data){
		d=data;
		next=NULL;

	}
};
class Stack{
	node*head;
	int l;
public:
	Stack(){
		head=NULL;
		l=0;

	}
		

	void push(int d){
		node*n=new node(d);
		n->next=head;
		head=n;
		l++;


		
	}

	void pop(){
		node*temp=head;
		head=head->next;
		delete temp;
		l--;
		temp=NULL;
		
	}

	
	int top(){
		return head->d;
	
	}

	// empty
	bool empty(){
		return head==NULL;
		
	}

	// size
	int size(){
		return l;
		
	}


};

int main(){

	Stack s;
	s.push(3);
	s.push(65);
	s.push(9);
	s.push(2);
	

	while(!s.empty()){
	cout<<s.top()<<" ";//8
	s.pop();
}




	return 0;
}