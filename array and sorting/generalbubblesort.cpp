#include<iostream>
using namespace std;

int main(){

	int arr[]={5,4,3,2,1,3,2,2,1,3,12,3,34,3,4};
	int n=sizeof(arr)/sizeof(int);//5

	for(int times=1;times<=n-1;times++){

		for (int j = 0;j<=n-times-1;j++)
	{
		if(arr[j]>arr[j+1]){
			// swap(arr[j],arr[j+1]);

			// using 3rd variable
			// int c=arr[j];
			// arr[j]=arr[j+1];
			// arr[j+1]=c;
			// using 2 variable

			// arr[j+1]=arr[j]+arr[j+1];
			// arr[j]=arr[j+1]-arr[j];
			// arr[j+1]=arr[j+1]-arr[j];

			arr[j]=(arr[j+1]+arr[j])-(arr[j+1]=arr[j]);

		}
	}

	}



	
	// 4,3,2,1,5

	
	// print 
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	

	

return 0;

}