#include <iostream>
using namespace std;
// int wineprob(int*wine,int l,int r,int y){
// 	if(l>r){
// 		return 0;
// 	}

// 	int op1=y*wine[l]+wineprob(wine,l+1,r,y+1);
// 	int op2=y*wine[r]+wineprob(wine,l,r-1,y+1);

// 	return max(op1,op2);


// }

int wineprobtd(int*wine,int l,int r,int y,int arr[100][100]){
	if(l>r){
		return arr[l][r]=0;
	}
	if(arr[l][r]!=-1){
		return arr[l][r];
	}

	int op1=y*wine[l]+wineprobtd(wine,l+1,r,y+1,arr);
	int op2=y*wine[r]+wineprobtd(wine,l,r-1,y+1,arr);

	return arr[l][r]=max(op1,op2);


}



int bu(int *wine,int n){

	int arr[100][100]={0};

	// diagonal fill
	for(int j=0;j<n;j++){
	arr[j][j]=wine[j]*n;
	}

	for(int i=n-2;i>=0;i--){

	for(int j=0;j<n;j++){
	if(j>i){
		int year=n-(j-i);

		int op1=year*wine[i]+arr[i+1][j];//24
		int op2=year*wine[j]+arr[i][j-1];//21
		arr[i][j]=max(op1,op2);



	}
}
}


	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}


	return arr[0][n-1];






}
int main(){
	int wine[]={2,3,5,1,4};

	int n=sizeof(wine)/sizeof(int);//5
	cout<<bu(wine,n)<<endl;

	// // cout<<wineprob(wine,0,n-1,1)<<endl;


	// int arr[100][100];

	// for(int i=0;i<100;i++){
	// 	for(int j=0;j<100;j++){
	// 		arr[i][j]=-1;
	// 	}
	// }
	// cout<<wineprobtd(wine,0,n-1,1,arr)<<endl;


	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<n;j++){
	// 		cout<<arr[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }



	return 0;
}