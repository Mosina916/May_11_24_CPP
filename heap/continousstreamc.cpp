#include<iostream>
#include<queue>
using namespace std;
void printheap(priority_queue<int,vector<int>, greater<int> > h){

	while(!h.empty()){
		cout<<h.top()<<endl;
		h.pop();
	}
}
int main(){
	 
	priority_queue<int,vector<int>, greater<int> > h;
	
	  int k;
	  cin>>k;//3 largest
	  int c=0;

	  int data;
		while(1){


	  cin>>data;//3 5 2 7 6 4 -1 16

	  if(c<=k-1){
	  h.push(data);
	  c++;//2
	}
	else{
		if(data==-1){
				printheap(h);
			}
		else{
			if(data>h.top()){
			h.pop();
			h.push(data);

		}
		
	}
}

}





	
	return 0;
}