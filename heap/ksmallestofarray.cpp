#include<iostream>
#include<queue>
using namespace std;

int main(){
	  // priority_queue<datatyoe> name;
	  // priority_queue<int> h;
	priority_queue<int> h;
	int n;
	cin>>n;
	  int k;
	  cin>>k;//3rd largest
	  int c=0;

	  int data;
		for(int i=0;i<n;i++){
	  cin>>data;//5 3 7 2 9 15 1 0 6

	  if(c<=k-1){
	  h.push(data);
	  c++;//3
	}
	else{
		if(data<h.top()){
			h.pop();
			h.push(data);

		}
	}
}

cout<<h.top()<<endl;


	
	return 0;
}