#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int ans=0;
	int n;

	cin>>n;//5

	int no;
	for(int i=1;i<=n-1;i++){
	cin>>no;//5
	ans=no^ans;//5^1^2^4
}
for(int i=1;i<=n;i++){
	ans=ans^i; //^3
}

cout<<ans<<endl;

	
	return 0;
}