#include<iostream>
using namespace std;
int fact(int n){
	int ans=1;
	for(int i=n;i>=1;i--){
		ans=ans*i;//120
	}
	return ans;
}
int ncr(int n,int r){
	int fans=fact(n)/(fact(r)*fact(n-r));
	return fans;
}
int main(){
	int n,r;
	cin>>n>>r;//5 2
	cout<<ncr(n,r)<<endl;


	
		

	// return 0;
}
