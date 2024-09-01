#include<iostream>
#include <vector>
using namespace std;
class Stack{
	vector<int>v;


public:
		
	// push
	void push(int d){
		v.push_back(d);
	}

	// pop
	void pop(){
		v.pop_back();
	}

	// top
	int top(){
		return v[v.size()-1];
	}

	// empty
	bool empty(){
		return v.size()==0;
	}

	// size
	int size(){
		return v.size();
	}


};

int main(){
	Stack s;
	s.push(3);
	s.push(13);
	s.push(23);
	s.push(53);

	s.push(8);

	while(!s.empty()){
	cout<<s.top()<<" ";//8
	s.pop();
}


	// s.pop();

	// s.top();
	// // cout<<s.v[0]<<endl;


	// Stack s1;
	


	return 0;
}