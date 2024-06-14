#include<iostream>
using namespace std;
int main(){
	int arr[]={4,1,3,0,5,2,-1,-1,-1,2,2,1,34,3,2,3,2};
	int n=sizeof(arr)/sizeof(int);//6
	int j;

	// algo1
	for(int i=1;i<=n-1;i++){
		int ele=arr[i];
		for(j=i-1;j>=0;j--){
			if(ele<arr[j]){
				arr[j+1]=arr[j];
				
			}
			else{
				break;
			}
		}
		arr[j+1]=ele;
	}


	// algo2 
	// for(int i=1;i<=n-1;i++){
	// 	int ele=arr[i];
	// 	for(j=i-1;j>=0;j--){
	// 		if(ele<arr[j]){
	// 			
	// 			swap(arr[j+1],arr[j]);
	// 		}
	// 		else{
	// 			break;
	// 		}
	// 	}
	// }


	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;




	return 0;
}