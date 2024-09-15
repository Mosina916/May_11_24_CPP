#include<iostream>
#include<queue>
using namespace std;

class Stack{
	queue<int>q1;
	queue<int>q2;
public:
	void push(int d){
		if(q1.empty() &&q2.empty()){
			q1.push(d);
		}
		else if(!q1.empty() &&q2.empty()){
			q1.push(d);
		}
		else{
			q2.push(d);

		}

	}

	void pop(){
		if(q1.empty() &&q2.empty()){
			return;
		}
		if(!q1.empty() &&q2.empty()){
			while(q1.size()>1){
			q2.push(q1.front());
			q1.pop();
		}
		q1.pop();

		}
		else{
			while(q2.size()>1){
			q1.push(q2.front());
			q2.pop();
		}
		q2.pop();

		}

	}

	int top(){
		int x;
		if(!q1.empty() &&q2.empty()){
			while(q1.size()>1){
			q2.push(q1.front());
			q1.pop();
		}
		x=q1.front();//20
		q2.push(q1.front());
		q1.pop();
		// return x;

		}
		else{
			while(q2.size()>1){
			q1.push(q2.front());
			q2.pop();
		}
		x=q2.front();//20
		q1.push(q2.front());
		q2.pop();
		// return x;

		}

		return x;

	}

	bool empty(){
		return q1.size()+q2.size()==0;
	}

	int size(){
		return q1.size()+q2.size();


	}


};


int main(){
	Stack s;
	// s.pop();
	s.push(30);
	s.push(60);
	s.push(90);
	s.push(20);
	s.push(10);
	s.pop();

	s.push(7);
	s.pop();


	while(!s.empty()){
	cout<<s.top()<<" ";
	s.pop();
}



	

	
	return 0;
}
