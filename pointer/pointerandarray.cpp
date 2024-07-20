#include<iostream>
using namespace std;
void f(int *b,int n){
	for(int i=0;i<=n-1;i++){
		b[i]=b[i]+10;

	}

	for (int i = 0; i <=n-1; ++i)
	{
		cout<<b[i]<<" ";
	}

	cout<<endl;

	// 13 14 15 17 12
	
}
int main(){
	// arr internal pointer 

	// int arr[]={3,4,5,7,2};
	// int n=sizeof(arr)/sizeof(int);

	// cout<<arr<<endl;//array ka naam print karne pe adress of 1st byte of first bucket
	// cout<<arr+1<<endl;


	// char arr[3]={'A','C','U'};
	// // int n=sizeof(arr)/sizeof(int);

	// cout<<arr<<endl;//array ka naam print karne pe adress of 1st byte of first bucket
	// // cout<<arr+1<<endl;


	int arr[]={3,4,5,7,2};
	int n=sizeof(arr)/sizeof(int);

	// int *ptr;

	// arr=ptr;inalid

	// int *ptr=arr;invalid
	// for (int i = 0; i <=n-1; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }//3 4 5 7 2

	cout<<endl;

	// f(arr,n);

	// for (int i = 0; i <=n-1; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;
	// //13 14 5 7 2



	

	

	return 0;

}