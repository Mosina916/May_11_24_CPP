#include <iostream>
#include<algorithm>
using namespace std;
bool amiabletoreadallbookswithts(int *arr,int ts,int tb,int capacity){
	int su=0;
	int cppade=0;
	for(int i=0;i<tb;i++){
	if(capacity-arr[i]-cppade<0){//146-90-113
		su++;//1
		cppade=arr[i];//90
		if(su==ts){
			return false;
		}



	}
	else{
		cppade=cppade+arr[i];//46

	}
}

	return true;


}

int main(){
	int t;
	cin>>t;
	while(t--){
		int tb,ts;
		cin>>tb>>ts;
		int arr[1000000];
		int tpc=0;
		for (int i = 0; i <tb; ++i)
		{
			cin>>arr[i];
			tpc+=arr[i];
		}
		int s=arr[tb-1];//90
		int e=tpc;
		int abhitakkaand=arr[tb-1];

		while(s<=e){
		int mid=(s+e)/2;//113

		if(amiabletoreadallbookswithts(arr,ts,tb,mid)){
			abhitakkaand=mid;//113
			e=mid-1;
		}
		else{

			s=mid+1;
		}

	}

	cout<<abhitakkaand<<endl;



	}


	return 0;
}