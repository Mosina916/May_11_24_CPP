#include<iostream>
#include<cmath>
using namespace std;
string replaceallpi(string s){//ppixipipxupii"
	// base case i
if(s.length()<=1){
	return s;
}


	// rec case
	string cs=s.substr(0,2);//"pi"
	if(cs=="pi"){
		return "3.14"+replaceallpi(s.substr(2));
	}
	else{
		return s[0]+replaceallpi(s.substr(1));

	}

}

int main(){
	string s;
	getline(cin,s);

	cout<< replaceallpi(s)<<endl;//"ppixipipxupii"-->p3.14xi3.14pxu3.14i
									//"pipixipipxupii"-->3.143.14xi3.14pxu3.14i


	




	return 0;
}