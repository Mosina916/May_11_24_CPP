#include<iostream>
using namespace std;
bool isarraysorted(int *arr,int n,int i){//6
	// base case
	if(i==n-1){
		return true;
	}
	// rec case
	if(arr[i]<=arr[i+1] and isarraysorted(arr,n,i+1) ){
		return true;
	}
	return false;
}


int main(){
	int arr[]={3,4,5,8,19};
	int n=sizeof(arr)/sizeof(int);//5
	if(isarraysorted(arr,n,0)){
		cout<<"array is sorted "<<endl;
	}
	else{
		cout<<"array is not sorted"<<endl;
	}

	// isarraysorted(arr,n);
	
	return 0;

}