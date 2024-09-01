#include<iostream>
#include <vector>
using namespace std;
class Stack{
	// vector<int>v;
	vector<char>v;


public:
		
	// push
	// void push(int d){
	void push(char d){
		v.push_back(d);
	}

	// pop
	void pop(){
		v.pop_back();
	}

	// top
	// int top(){
	char top(){
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
	// Stack s;
	// s.push(3);
	// s.push(13);
	// s.push(23);
	// s.push(53);

	// s.push(8);

	Stack s;
	// s.push(65);
	// s.push(67);
	// s.push(68);
	// s.push(53);

	// s.push('D');
	// s.push('G');
	// s.push('A');
	// char ch;
	// cin>>ch;
	// s.push(ch);

	// int n;
	// cin>>n;//5
	
	// for (int i = 0; i <n; ++i)
	// {
	// 	char ch;
	// 	cin>>ch;
	// 	s.push(ch);
	// }

	// s.push(8);

	while(!s.empty()){
	cout<<s.top()<<" ";//8
	s.pop();
}




	return 0;
}