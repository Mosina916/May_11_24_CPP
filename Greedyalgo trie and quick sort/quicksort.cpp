#include<iostream>
using namespace std;
int partion(int *arr,int s,int e){ //1,2,3,4,5
	int pivot=arr[e];//2
	int i=s-1;

	int j;
	for(j=s;j<e;j++){
	if(arr[j]<=pivot){
		i++;
		swap(arr[i],arr[j]);

	}
}
	swap(arr[i+1],arr[j]);
	return i+1;

}
void quicksort(int *arr,int s,int e){
	if(s>=e){
		return;

	}

	int indx=partion(arr,s,e);//3
	quicksort(arr,s,indx-1);//0 1 1
	quicksort(arr,indx+1,e);//
}
int main(){
	//16807%n

	cout<<rand()<<endl;
	// int arr[]={4,3,6,1,1,5,0,2};
	// int n=sizeof(arr)/sizeof(int);
	// // int arr[]={1,2,3,4,5};
	// // swap(arr[3],arr[2]);

	// // cout<<srand()<<endl;


	// quicksort(arr,0,n-1);
	// for (int i = 0; i <n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;


	return 0;
}