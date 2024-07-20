#include<iostream>
using namespace std;
int stringtoint(string s){//4

	// base case
	if(s.length()==0){
		return 0;
	}
	int p=s.length();
	char ch=s[p-1];//6 3 5 4
	int x=ch-'0';//6 3 5 4
	s.pop_back();
	return stringtoint(s)*10+x;
}
// "100"+800

int main(){
	string s;//"453"
	getline(cin,s);
	int n=s.length();

	cout<<stringtoint(s)<<endl;
	return 0;

}