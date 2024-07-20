#include<iostream>
using namespace std;
string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void wordprint(int n){
	// base case
	if(n==0){
		return;

	}

	// rec case

	wordprint(n/10);
	int dig=n%10;//8
	cout<<arr[dig]<<" ";

}
int main(){//start

	int n;
	cin>>n;//2048
	wordprint(n);p
	return 0;
}