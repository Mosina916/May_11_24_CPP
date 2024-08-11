#include<iostream>
using namespace std;
int main(){
	// int arr[4][5];
	// int tr,tc;
	// cin>>tr>>tc;

	// int *a0=new int[5];

	// int *a1=new int[5];

	// int *a2=new int[5];
	// int *a3=new int[5];
	// int *a4=new int[5];

	// int* arr[4];

	// int* *ptr=new int *[4];

	// // ptr[0]=new int[5];
	// // ptr[1]=new int[5];
	// // ptr[2]=new int[5];
	// // ptr[3]=new int[5];


	// for (int i = 0; i <=3; ++i)
	// {
	// 	ptr[i]=new int[5];
	// }


	for (int i = 0; i <=3; ++i)
	{
		for(int j=0;j<=4;j++){
			cin>>ptr[i][j];
		}
	}

	for (int i = 0; i <=3; ++i)
	{
		for(int j=0;j<=4;j++){
			cout<<ptr[i][j]<<" ";
		}
		cout<<endl;
	}


	for (int i = 0; i <=3; ++i)
	{
		delete[] ptr[i];
	}



	delete[] ptr;
	ptr=NULL;







	
	return 0;
}