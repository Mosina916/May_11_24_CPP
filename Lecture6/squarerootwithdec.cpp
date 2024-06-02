#include<iostream>
using namespace std;

int main(){

	float inc=1;

	int no;
	cin>>no;//13
	int uptohmdp;
	cin>>uptohmdp;//3

	float i=0;


	// int time=1;
	// while(time<=uptohmdp+1){


	// while(i*i<=no){
	// 	i=i+inc;//3.601

	// }
	// i=i-inc;//3.605
	// inc=inc/10;//0.0001

	// time++;

// }
for(int time=1;time<=uptohmdp+1;time++){
	while(i*i<=no){
		i=i+inc;//3.601

	}
	i=i-inc;//3.605
	inc=inc/10;//0.0001

}

cout<<i<<endl;




// int no;
	// cin>>no;

	// cout<<sqrt(no)<<endl;


	// set_precesion




	
	return 0;
}