#include<iostream>
using namespace std;

int main(){

	// datatype nameofarr[size]

	// int arr[10]={2,5,4,7,7,1,2,4,3,7};
	int arr[]={2,5,4,7,7,1,2,4,3,7};

	int n=sizeof(arr)/sizeof(int);

	// int b[100];

	int i=n-1;
	while(i>=0){
		cout<<arr[i]<<" ";
	i--;

	}
	


	

return 0;

}