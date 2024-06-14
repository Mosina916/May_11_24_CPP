#include<iostream>
using namespace std;

int main(){

	// int arr[]={3,7,4,-2,16,13};
	
	int arr[100];
	int n;
	cin>>n;//6

	// int n=sizeof(arr)/sizeof(int);//6

	for(int j=0;j<=n-1;j++){
		cin>>arr[j];
	}

	int largest=arr[0];

	int i=1;

	while(i<=n-1){
	if(arr[i]>largest){
		largest=arr[i];
	}
	i++;

}

	cout<<"largest is "<<largest<<endl;



	
	
	


	

return 0;

}