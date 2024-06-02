#include<iostream>
#include<cmath>
using namespace std;
13-->1101

int main(){

	int  no;
	cin>>no;
	int ans=0;
	while(no!=0){
		int ls=no%10;
		ans=ans*10+ls;
		no=no/10;
	}

	cout<<ans<<endl;
	

	
	return 0;
}