#include<iostream>
using namespace std;
bool isarraysorted(int *arr,int n){//6
	// base case
	if(n==1){
		return true;
	}
	// rec case
	if(isarraysorted(arr,n-1) and arr[n-2]<=arr[n-1]){
		return true;
	}
	return false;
}

bool isarraysorted2(int *arr,int n){//6
	// base case
	if(n==1){
		return true;
	}
	
	// rec case

	if(isarraysorted(arr+1,n-1) and arr[0]<=arr[1]){
		return true;
	}
	return false;
	
}

int main(){
	int arr[]={3,4,5,8,19};
	int n=sizeof(arr)/sizeof(int);//5
	if(isarraysorted(arr,n)){
		cout<<"array is sorted "<<endl;
	}
	else{
		cout<<"array is not sorted"<<endl;
	}

	// isarraysorted(arr,n);
	
	return 0;

}