// 2 15
// 2 3 5 7 11 13

#include<iostream>
using namespace std;
int main(){
	// int no;
	// cin>>no;//7
	// if(no==1){
	// 	cout<<"neither prime nor composite"<<endl;
	// }
	int n;
	cin>>n;

	int no=2;
	while(no<=n){


	// ========================================

	int i=2;
	while(i<=no-1){
		if(no%i==0){
			// cout<<"NOT Prime"<<endl;
			break;

		}
		i=i+1;
	}

	if(i==no){
		cout<<no<<endl;
	}


	//  ========================================
	no=no+1;
}



	return 0;
}