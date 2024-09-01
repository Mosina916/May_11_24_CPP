#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &s,int x){
	if(s.empty()){
		s.push(x);
		return;

	}
	int p=s.top();
	s.pop();
	insertatbottom(s,x);
	s.push(p);

}

void reversestack(stack<int> &s){
	// base case
	if(s.empty()){
		return;
	}


	// rec case
	int x=s.top();//7
	s.pop();
	reversestack(s);

	insertatbottom(s,x);
}


int main(){

	stack<int>s;
	s.push(3);
	s.push(65);
	s.push(9);
	s.push(2);
	reversestack(s);

	while(!s.empty()){
	cout<<s.top()<<" ";//8
	s.pop();
}


	


	return 0;
}