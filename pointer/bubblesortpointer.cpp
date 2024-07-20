#include<iostream>
using namespace std;

int main(){

	int arr[]={5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);//5

	for (int j = 0;j<=3;j++)
	{
		if(*(arr+j)>*(arr+j+1)){
			swap(*(arr+j),*(arr+j+1));
		}
	}
	// 4,3,2,1,5

	for (int j = 0;j<=2;j++)
	{
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
	}
	// 3,2,1, 4,5

	for (int j = 0;j<=1;j++)
	{
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
	}

	for (int j = 0;j<=0;j++)
	{
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
	}
	// print 
	for(int i=0;i<=n-1;i++){
		cout<<*(arr+i)<<" ";
	}
	

	

return 0;

}