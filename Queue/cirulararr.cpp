#include<iostream>
#include<cmath>
using namespace std;
class Queue{
	int *arr;
	int f;
	int r;
	int cs;
	int ms;
public:
	Queue(int s){
		arr=new int[s];
		 f=0;
		r=-1;
		 cs=0;
		ms=s;
	}

	void pushh(int d){
		if(cs<ms){
			r=(r+1)%ms;
			arr[r]=d;
			cs++;
		}
		else{
			cout<<"overflow"<<endl;
		}

	}


	void pop(){
		if(cs>0){
			f=(f+1)%ms;
			cs--;
		}
		else{
			cout<<"underflow"<<endl;
		}

	}

	int front(){
		return arr[f];

	}

	int size(){

		return cs;

	}


	bool empty(){
		return cs==0;

	}

};
int main(){
	Queue q(5);

	q.pushh(4);
	q.pushh(40);
	q.pushh(14);
	q.pushh(18);
	q.pushh(45);
	q.pushh(48);

	while(!q.empty()){
	cout<<q.front()<<" ";
	q.pop();
}


cout<<endl;


	
	return 0;
}
