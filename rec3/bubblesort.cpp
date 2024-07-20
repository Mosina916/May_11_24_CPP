#include<iostream>
using namespace std;
void bubblesortrec(int *arr,int n,int i){//4
	if(i==n-1){
		return;
	}

	for(int j=0;j<=n-2-i;j++){ //optimization
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);

			}
		}
		 // 1 2 3 4 5
		bubblesortrec(arr,n,i+1);

}

int main(){//start
	int arr[]={5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);
	bubblesortrec(arr,n,0);

	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<' ';
	}

	cout<<endl;

	return 0;
}