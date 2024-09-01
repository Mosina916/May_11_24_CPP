#include<iostream>
#include<stack>
using namespace std;
int main(){

	// stack<dt>s;
		stack<int>s;
	s.push(3);
	s.push(65);
	s.push(9);
	s.push(2);

	cout<<s.size()<<endl;
	

	while(!s.empty()){
	cout<<s.top()<<" ";//8
	s.pop();
}




	return 0;
}