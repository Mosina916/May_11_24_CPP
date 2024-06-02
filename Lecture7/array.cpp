#include<iostream>
using namespace std;

int main(){
	int arr[5];
	// cin>>arr[0];
	// cin>>arr[1];
	// cin>>arr[2];
	// cin>>arr[3];
	// cin>>arr[4];
	int i=0;
	while(i<=4){
		cin>>arr[i];
		i=i+1;
	}

	for(int i=0;i<=4;i++){
		cout<<arr[i]<<" ";
	}

	// cout<<arr[0]<<" ";
	// cout<<arr[1]<<" ";
	// cout<<arr[2]<<" ";
	// cout<<arr[3]<<" ";
	// cout<<arr[4]<<" ";





	
	return 0;
}