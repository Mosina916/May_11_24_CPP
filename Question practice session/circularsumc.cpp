#include <iostream>
using namespace std;
int main(){

	// int arr[]={5,-1,2,-7,1,-2,4,-1,2};

	int arr[]={-3,-2,-3};
	int n=sizeof(arr)/sizeof(int);
	int cs=0;
	int ms=INT_MIN;
	int csum=0;
	for (int i = 0; i <n; ++i)
	{
		cs=cs+arr[i];
		csum=csum+arr[i];
		if(cs>ms){
			ms=cs;
		}
		if(cs<0){
			cs=0;
		}
	}

	// ms-->6
	int op1=ms;
	// csum-->3
	for (int i = 0; i <n; ++i)
	{
		arr[i]=-1*(arr[i]);
	}


	cs=0;
	ms=INT_MIN;
	
	for (int i = 0; i <n; ++i)
	{
		cs=cs+arr[i];
		
		if(cs>ms){
			ms=cs;
		}
		if(cs<0){
			cs=0;
		}
	}


	int op2=csum-(-ms);


	cout<<max(op1,op2)<<endl;









	


	return 0;
}