#include<iostream>
using namespace std;
bool is7presentornot(int*arr,int n){

	// base case
	if(n==0){
		return false;
	}
	// rec case
	if(is7presentornot(arr,n-1)||arr[n-1]==7){
		return true;
	}
	return false;
}

int fisrtindexof7(int *arr,int n,int i){

	// base case
	if(i==n){
		return -10;

		// cout<<elel

	}
	// rec case
	if(arr[i]==7){
		return i;

	}
	return fisrtindexof7(arr,n,i+1);


}
int y=90;

int lastindexof7(int *arr,int n,int i){

	// base case
	if(i<0){
		return -10;

		// cout<<elel

	}
	// rec case
	if(arr[i]==7){
		y=100;
		return i;

	}
	return fisrtindexof7(arr,n,i-1);


}
void allindexof7(int *arr,int n,int i){
	// base case
	if(i==n){
		return;
	}


	// rec case
	if(arr[i]==7){
		y=100;
		cout<<i<<" ";//0 2 4

	}
	allindexof7(arr,n,i+1);//9


}

int main(){
	int arr[]={7,1,7,2,7,8,9,7,5};//0 2 4 7
	int n=sizeof(arr)/sizeof(int);
	allindexof7(arr,n,0);
	if(y==90){
		cout<<"7 is not present"<<endl;
	}
	// cout<<lastindexof7(arr,n,n-1)<<endl
	// int x=fisrtindexof7(arr,n,0);//3
	// int x=lastindexof7(arr,n,n-1);
	// if(x<0){
	// 	cout<<"7 is not present"<<endl;
	// }
	// else{
	// 	cout<<"7 is  present at index "<<x<<endl;

	// }
	// // cout<<is7presentornot(arr,n)<<endl;
	return 0;

}