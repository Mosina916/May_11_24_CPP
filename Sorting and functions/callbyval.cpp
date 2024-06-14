#include<iostream>
using namespace std;
void f(int n){
	n=n+10;
	cout<<n<<endl;//15


}
int main(){
	int n;
	cin>>n;//5
	cout<<n<<endl;//5
	f(n);
	cout<<n<<endl;//15 5
		

	return 0;
}
