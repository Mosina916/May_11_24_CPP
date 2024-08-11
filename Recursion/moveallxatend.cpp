#include<iostream>
#include<cmath>
using namespace std;
string moveallxatend(string s){
	// vbase case

	if(s.length()==0){
		return "";
	}


	// rec case
	char ch=s[0];
	if(ch=='x'){
			return moveallxatend(s.substr(1))+ch;//rrweepxxxxxxx

	}
	else{
		return ch+ moveallxatend(s.substr(1));

	}




}


int main(){
	string s;
	getline(cin,s);//txxrxxrxwexexp

	cout<< moveallxatend(s)<<endl;


	// xrxxrxwexexp-->t+rrweepxxxxxx+





	return 0;
}