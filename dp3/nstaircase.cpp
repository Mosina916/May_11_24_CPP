#include<iostream>
using namespace std;

// int nstaircase(int n){
// 	if(n==0){
// 		return 1;
// 	}
// 	if(n<0){
// 		return 0;
// 	}


// 	return nstaircase(n-1)+nstaircase(n-2)+nstaircase(n-3);
// }


// int nstaircase(int n,int jumps){
// 	if(n==0){
// 		return 1;
// 	}
// 	if(n<0){
// 		return 0;
// 	}

// 	int ans=0;
// 	for(int l=1;l<=jumps;l++){
// 	ans=ans+nstaircase(n-l,jumps);
// 	}
// 	return ans;

// 	// return nstaircase(n-1)+nstaircase(n-2)+nstaircase(n-3);
// }


// int nstaircasetd(int n,int jumps,int *arr){
// 	if(n==0){
// 		return arr[n]=1;
// 	}
// 	if(n<0){
// 		return 0;
// 	}
// 	if(arr[n]!=-1){
// 		return arr[n];
// 	}

// 	int ans=0;
// 	for(int l=1;l<=jumps;l++){
// 	ans=ans+nstaircasetd(n-l,jumps,arr);
// 	}
// 	return arr[n]=ans;

// 	// return nstaircase(n-1)+nstaircase(n-2)+nstaircase(n-3);
// }


int bu(int n,int jump){
	int *arr=new int [n+1];
	arr[0]=1;
	for(int i=1;i<=n;i++){
	int ans=0;
	for(int j=1;j<=jump;j++){//2
	if(i-j>=0){
	ans=ans+arr[i-j];//1
}
}
arr[i]=ans;
}
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<' ';
	}
	cout<<endl;

	return arr[n];


}




int main(){

	int n;
	cin>>n;
	int jump;
	cin>>jump;

	// // cout<<nstaircase(n,jump)<<endl;

	// int *arr=new int[n+1];
	// for (int i = 0; i <=n; ++i)
	// {
	// 	arr[i]=-1;
	// }

	// cout<<nstaircasetd(n,jump,arr)<<endl;


	// for(int i=0;i<=n;i++){
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;


	cout<<bu(n,jump)<<endl;



	return 0;
}