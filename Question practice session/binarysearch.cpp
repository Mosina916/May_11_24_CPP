#include<iostream>
using namespace std;
bool binarysearch(int *arr,int s,int e,int key){
	while(s<=e){
		int mid=(s+e)/2;
		if(arr[mid]==key){
			cout<<"key is present at index "<<mid<<endl;
			return true;

		}
		else if(key<arr[mid]){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return false;
}
int main(){
	int arr[]={0,2,3,5,7,9,10,13,17};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;

	if(binarysearch(arr,0,n-1,key)==false){
		cout<<"key is not present"<<endl;
	}



	
	return 0;
}