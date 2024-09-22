#include<iostream>
#include<queue>
using namespace std;

int main(){
	  // priority_queue<datatyoe> name;
	  // priority_queue<int> h;//max heap
	// priority_queue<int,vector<int>, greater<int> > h;
	  int data;
	 for(int i=0;i<=5;i++){

	 	cin>>data;
	  h.push(data);
	}


	while(!h.empty()){
	cout<<h.top()<<" ";//0 1 2
	h.pop();
}
cout<<endl;




	
	return 0;
}