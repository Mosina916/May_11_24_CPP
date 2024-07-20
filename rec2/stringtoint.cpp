#include<iostream>
using namespace std;
int stringtoint(string s,int n){

	// base case
	if(n==0){
		return 0;
	}
	// rec case
	char ch=s[n-1];
	int x=ch-'0';
	return stringtoint(s,n-1)*10+x;
}
// "100"+800

int main(){
	string s;
	getline(cin,s);
	int n=s.length();

	cout<<stringtoint(s,n)<<endl;
	return 0;

}