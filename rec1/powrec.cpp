#include<iostream>
using namespace std;
int powab(int a,int b){//2 
	// base case
	if(b==0){
		return 1;
		
	}
	
	// rec case
	return a*powab(a,b-1);

}

int main(){

	int a,b;
	cin>>a>>b;
	cout<<powab(a,b)<<endl;//3 5
	


	return 0;

}