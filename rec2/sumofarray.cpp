#include<iostream>
using namespace std;
int sumofarray1(int *arr,int n){//6
	// base case
	if(n==0){
		return 0;
	}
	// rec case
	return sumofarray1(arr,n-1)+ arr[n-1];
		
}

int sumofarray2(int *arr,int n){//6
	// base case
	if(n==0){
		return 0;
	}
	// rec case
	return arr[0]+sumofarray2(arr+1,n-1);
}

int sumofarray3(int *arr,int n,int i){//6
	// base case
	if(i==n){
		return 0;
	}
	// rec case
	return arr[i]+sumofarray3(arr,n,i+1);
}

int main(){
	int arr[]={3,4,5,8,19};
	int n=sizeof(arr)/sizeof(int);//5
	cout<<sumofarray1(arr,n)<<endl;
	cout<<sumofarray2(arr,n)<<endl;
	cout<<sumofarray3(arr,n,0)<<endl;
		
	
	return 0;

}