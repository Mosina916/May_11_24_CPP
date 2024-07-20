#include<iostream>
using namespace std;
int sumofdigits(int n){
	// base case
	if(n==0){
		return 0;
	}
	
	// rec case
	int x=n%10;
	return sumofdigits(n/10)+x;

}

int main(){

	int n;
	cin>>n;//4732
	cout<<sumofdigits(n)<<endl;
	


	return 0;

}