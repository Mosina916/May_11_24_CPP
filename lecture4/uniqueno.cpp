#include<iostream>
using namespace std;

int main(){
	int n,no;
	cin>>n;
	int i=1;
	int ans=0;
	while(i<=n){
		cin>>no;
		ans^=no;
		i=i+1;
	}


	cout<<ans<<endl;

	
	

	return 0;
}