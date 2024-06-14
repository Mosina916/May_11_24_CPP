#include<iostream>
using namespace std;

int main(){

	// int arr[]={3,4,7,2,7};
	// int n=sizeof(arr)/sizeof(int);//5
		int arr[100];
	int n;
	cin>>n;//6

	// int n=sizeof(arr)/sizeof(int);//6

	for(int j=0;j<=n-1;j++){
		cin>>arr[j];
	}


	int key;
	cin>>key;//2


	int i=0;

	while(i<=n-1){
		if(arr[i]==key){

		cout<<"key is present at index "<<i<<endl;
		break;

	}
	else{
		i++;
	}

	}

	if(i==n){

		cout<<"key not present"<<endl;

	}
	
	


	

return 0;

}