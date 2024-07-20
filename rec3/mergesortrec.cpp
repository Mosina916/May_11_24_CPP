#include<iostream>
using namespace std;
void mergetwosortedarray(int *arr,int s,int e){
	int i=s;
	int mid=(s+e)/2;
	int j=mid+1;
	int k=s;
	int temp[1000];

	while(i<=mid and j<=e){
		if(arr[i]>arr[j]){
		temp[k]=arr[j];
		j++;
		k++;
	}
	else{
		temp[k]=arr[i];
		i++;
		k++;

	}

	}


	// agar pehli array khatam
	while(j<=e){
		temp[k]=arr[j];
	j++;
	k++;
	

	}

	// agar dusri arrau array khatam
	while(i<=mid){
		temp[k]=arr[i];
	i++;
	k++;
	

	}
	// copy temp wali array arr
	for(int l=s;l<=e;l++){
		arr[l]=temp[l];
	}
	

}

void mergesort(int *arr,int s,int e){
	if(s==e){
		return;
	}

	// step1 -->mid
	int mid=(s+e)/2;//2
	// step 2 rec part1
	mergesort(arr,s,mid);//3 5 6
	// step3 rec part 2
	mergesort(arr,mid+1,e);//1 7
	// step 3 merge part1 and part2
	mergetwosortedarray(arr,s,e);

}

int main(){//start

	int arr[]={5,3,2,7,1};//1 3 5 6 7
	int n=sizeof(arr)/sizeof(int);
	mergesort(arr,0,n-1);


	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	
	

	return 0;
}