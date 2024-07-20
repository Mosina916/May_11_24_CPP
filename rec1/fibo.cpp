#include<iostream>
using namespace std;
int fibo(int n){//6
	// base case
	if(n==1){
		return 0;
	}
	if(n==2){
		return 1;
	}
	// rec case
	 int x=fibo(n-1);
	 int y=fibo(n-2);
	return x+y;
}

int main(){
	int n;
	cin>>n;//6
	cout<<fibo(n)<<endl;
	return 0;

}