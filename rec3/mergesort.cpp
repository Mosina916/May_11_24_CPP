#include<iostream>
using namespace std;
void mergetwosortedarray(int *arr1,int n,int *arr2,int m){

	int k=m+n-1;
	int i=n-1;
	int j=m-1;
	while(i>=0 and j>=0){
		if(arr1[i]>arr2[j]){
		arr1[k]=arr1[i];
		i--;
		k--;
	}
	else{
		arr1[k]=arr2[j];
		j--;
		k--;

	}

	}

	// array 2 k baki element direct copy
	while(j>=0){
		arr1[k]=arr2[j];
	j--;
	k--;
	

	}
	

}

int main(){//start
	int arr1[100]={3,5,7,8,9,10};
	int arr2[100]={1,2,4,6};
	// 1 2 3 4 5 6 7 8 9 10
	int n=6;
	int m=4;


	mergetwosortedarray(arr1,n,arr2,m);

	for (int i = 0; i <=m+n-1; ++i)
	{
		cout<<arr1[i]<<" ";
	}
	cout<<endl;


	

	return 0;
}