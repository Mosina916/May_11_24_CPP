#include<iostream>
using namespace std;
int main(){
	// sma
	// int a;
	// a=10;

	// dma 

	// int *ptr=new int;
	// *ptr=10;

	// delete ptr;
	ptr=NULL;
	// cout<<*ptr<<endl;


	// float f;
	// f=10.546;

	// float*ptr=new float;
	// *ptr=10.546;
	// cout<<*ptr<<endl;


	// int arr[100];
	// int n;
	// cin>>n;
	// for (int i = 0; i <n; ++i)
	// {
	// 	cin>>arr[i];
	// }
	// arr[0]

	int*ptr =new int[100];
	// ptr[0];

	// int n;
	int *x=new int;
	// cin>>n;
	cin>>*x;
	for (int i = 0; i <*x; ++i)
	{
		cin>>ptr[i];
	}
	delete[] ptr;
	ptr=NULL;

	// for (int i = 0; i <*x; ++i)
	// {
	// 	cout<<ptr[i]<<" ";
	// }




	
	return 0;
}