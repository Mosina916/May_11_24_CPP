#include<iostream>
#include<queue>
using namespace std;

int main(){
	queue<int> q;

	q.push(4);
	q.push(40);
	q.push(14);
	q.push(18);
	q.push(45);
	q.push(48);

	while(!q.empty()){
	cout<<q.front()<<" ";
	q.pop();
}


cout<<endl;


	
	return 0;
}
