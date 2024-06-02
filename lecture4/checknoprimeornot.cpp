#include<iostream>
using namespace std;
int main(){
	int no;
	cin>>no;//7
	if(no==1){
		cout<<"neither prime nor composite"<<endl;
	}

	int i=2;
	while(i<=no-1){
		if(no%i==0){
			cout<<"NOT Prime"<<endl;
			break;

		}
		i=i+1;
	}

	if(i==no){
		cout<<"prime"<<endl;
	}




	return 0;
}