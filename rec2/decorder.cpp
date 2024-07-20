#include<iostream>
using namespace std;
void decp(int n){//0
	// b case
	if(n==0){
		return;

	}
	// rec case
	cout<<n<<" ";//5 4 3 2 1
	decp(n-1);

}
void incp(int n){//5
	// ba case
	if(n==0){
		return;
	}


	// rec case
	incp(n-1);//1 2 3 4
	cout<<n<<" ";

}

int main(){
	int n;
	cin>>n;//5 //dec n to 1.  o/p 5 4 3 2 1

	// decp(n);
	incp(n);//1 to n=5 1 2 3 4 5
	return 0;

}