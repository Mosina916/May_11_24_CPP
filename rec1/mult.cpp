#include<iostream>
using namespace std;
int mult(int a,int b){
	// base case
	if(b==0){
		return 0;
		
	}
	
	// rec case
	return a+mult(a,b-1);

}

int main(){

	int a,b;
	cin>>a>>b;
	mult(a,b);//3 5
	


	return 0;

}