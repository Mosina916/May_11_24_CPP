#include<iostream>
using namespace std;

int main(){
	// int arr[]={3,-1,2,-5,6,-1,-2,5,-2,-7,5};

	int arr[]={-2,-1,-3,-5,-6};
	int n=sizeof(arr)/sizeof(int);

	int cs=0;
	int ms=INT_MIN;

	for (int i = 0; i <n; ++i)
	{
		cs=cs+arr[i];//-3
		if(cs>ms){//-1 
			ms=cs;//-1
		}
		if(cs<0){
			cs=0;//0
		}
	}

	cout<<ms<<endl;
	

	

	
	return 0;
}