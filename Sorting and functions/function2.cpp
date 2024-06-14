#include<iostream>
using namespace std;
// returntype name(){
// 	// task
// }

void sum(){
	int a,b;
	cin>>a>>b;
	cout<<a+b<<endl;
}


int mult(){
	int a,b;
	cin>>a>>b;//2 5
	return a*b;
}

void divi(float x,float y){
	
	cout<<(x/y)<<endl;
	// return x/y;
}

int sub(int x,int y){
	return x-y;
}


int main(){
	sum();

	cout<<mult()<<endl;
	divi(4,6);
	cout<<sub(7,9)<<endl;

	// sum();

	// int a,b;//8 2
	// cin>>a>>b;
	// div(a,b);


	

	

	return 0;
}