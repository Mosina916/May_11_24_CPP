#include <iostream>
using namespace std;
// 2^n
int fibo(int n){
	// base case
	if(n==1){
		return 1;
	}
	if(n==0){
		return 0;
	}
	// rec case
	return fibo(n-1)+fibo(n-2);
}
// bottom up-->o(n)
int fibodpbu(int n){
	int *arr=new int[n+1];
	arr[0]=0;
	arr[1]=1;

	for (int i = 2; i <=n ; ++i)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}


	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return arr[n];

}


// top down
int fibotd(int n,int *arr){
	// base case
	if(n==1||n==0){
		return arr[n]=n;
	}
	if(arr[n]!=-1){
		return arr[n];
	}
	// rec case
	return arr[n]=fibotd(n-1,arr)+fibotd(n-2,arr);
}


int main(){
	int n;
	cin>>n;//find nth fibo no. 5
	cout<<fibodpbu(n)<<endl;
	
	int *arr=new int[n+1];
	for(int i=0;i<=n;i++){
		arr[i]=-1;
	}

	cout<<fibotd(n,arr)<<endl;

	cout<<endl;

	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;


	cout<<fibo(n)<<endl;


	return 0;
}