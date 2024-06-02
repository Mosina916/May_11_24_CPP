#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int i=0;

	long long int no;
	cin>>no;//0
	if(no==0){

		cout<<5<<endl;
		return 0;
	}
	long long int ans=0;
	while(no!=0){
		int ld=no%10;

		if(ld==0){
			ld=5;
		}

		ans=ld*pow(10,i)+ans;
		i++;
		no=no/10;

	}
	cout<<ans<<endl;
	
	return 0;
}