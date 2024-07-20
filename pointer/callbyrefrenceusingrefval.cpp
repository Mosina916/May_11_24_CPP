#include<iostream>
using namespace std;

// int y=60;
void f(int d){
	d=d+40;
	cout<<d<<endl;//60
}
int main(){

	int s=20;
	cout<<s<<endl;//20

	f(s);

	cout<<s<<endl;//20

	

	

	return 0;

}