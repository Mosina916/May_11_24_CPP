#include<iostream>
using namespace std;

// int y=60;
void f(int*ptr){
	*ptr=*ptr+40;
	cout<<*ptr<<endl;//60
}
int main(){

	int s=20;
	// cout<<s<<endl;//20

	f(&s);

	cout<<s<<endl;//60

	

	

	return 0;

}