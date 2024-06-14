#include<iostream>
using namespace std;

int main(){

	// int arr[]={3,-2,3,4,4,-9,0,-6,3,2,2,4,5,1,2};
	// int n=sizeof(arr)/sizeof(int);//5

	
	for(int pos=0;pos<=n-2;pos++){
		int minindex=pos;
		for(int j=pos+1;j<=n-1;j++){
			if(arr[j]<arr[minindex]){
				minindex=j;
			}
		}
		swap(arr[pos],arr[minindex]);

	}


	
	// print 
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	

	

return 0;

}