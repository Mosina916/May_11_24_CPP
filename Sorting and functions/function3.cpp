#include<iostream>
using namespace std;




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

void sum();//forward decleration
int main(){
	sum();

	cout<<mult()<<endl;
	divi(4,6);
	cout<<sub(7,9)<<endl;



	

	

	return 0;
}
void sum(){
	int a,b;
	cin>>a>>b;
	cout<<a+b<<endl;
}