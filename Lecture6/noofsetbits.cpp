#include<iostream>
#include<cmath>
using namespace std;

// 13-->binary 1101%10 /10
int main(){
	int co=0;

	int  no;
	cin>>no;//13
	cout<<__builtin_popcount(no);


	// cout<<countSetBits(no);


	// while(no!=0){
	// 	if((no&1)==1){//3&1
	// 	co=co+1;//3

	// }
	// no=no>>1;//1

	// }

	// cout<<co<<endl;
	
	
	
	return 0;
}