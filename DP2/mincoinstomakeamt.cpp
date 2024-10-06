#include <iostream>
using namespace std;
// int mincoinstomakeat(int *coins,int n,int amount){
// 	if(amount==0){
// 		return 0;
// 	}


// 	int ans=INT_MAX;
// 	for(int i=0;i<n;i++){

// 	int bachaamt=amount-coins[i];//
// 	if(bachaamt>=0){
// 		int rans=mincoinstomakeat(coins,n,bachaamt);//4
// 		if(rans<ans){
// 			ans=rans+1;//3
// 		}

// 	}
// }

// 	return ans;


// }


int mincoinstomakeattd(int *coins,int n,int amount,int *arr){
	if(amount==0){
		return arr[amount]=0;
	}
	if(arr[amount]!=INT_MAX){
		return arr[amount];
	}

	int ans=INT_MAX;
	for(int i=0;i<n;i++){

	int bachaamt=amount-coins[i];//
	if(bachaamt>=0){
		int rans=mincoinstomakeattd(coins,n,bachaamt,arr);//4
		if(rans<ans){
			ans=rans+1;//3
		}

	}
}

	return arr[amount]=ans;
}



int buminc(int *coins,int n,int amount){
	int *arr=new int[amount+1];

	for (int i = 0; i <=amount; ++i)
	{
		arr[i]=INT_MAX;
	}
	arr[0]=0;
	for(int curramout=1;curramout<=amount;curramout++){//2
	for(int j=0;j<n;j++){
	int bachaamt=curramout-coins[j];//0
	if(bachaamt>=0){
		arr[curramout]=min(arr[curramout],arr[bachaamt]+1);

	}
}

}

for (int i = 0; i <=amount; ++i)
{
	cout<<arr[i]<<" ";
}
cout<<endl;

return arr[amount];


}
int main(){
	int coins[]={20,9,6,5,1};
	int n=sizeof(coins)/sizeof(int);
	int amount;
	cin>>amount;//13
	cout<<buminc(coins,n,amount)<<endl;
	// // cout<<mincoinstomakeat(coins,n,amount)<<endl;

	// int *arr=new int[amount+1];
	// for (int i = 0; i <=amount; ++i)
	// {
	// 	arr[i]=INT_MAX;
	// }


	// cout<<mincoinstomakeattd(coins,n,amount,arr)<<endl;


	// for (int i = 0; i <=amount; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;


	return 0;
}