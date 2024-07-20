#include<iostream>
using namespace std;
string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void reversewordprint(int n){
	// base case
	if(n==0){
		return;

	}

	// rec case
	int dig=n%10;//8
	cout<<arr[dig]<<" ";
	reversewordprint(n/10);

}
int main(){//start

	int n;
	cin>>n;//2048
	reversewordprint(n);
}