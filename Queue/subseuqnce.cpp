#include<iostream>
#include<queue>
using namespace std;
void subsquenc(string s,string ans){//
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}
	// ans=ans+s[0];//a
	subsquenc(s.substr(1),ans+s[0]);
	// ans.pop_back();
	subsquenc(s.substr(1),ans);

	// subsquenc(s.substr(1),ans);
	// ans=ans+s[0];//a
	// subsquenc(s.substr(1),ans);
	
	
	

}



int main(){

	string s;
	cin>>s;
	subsquenc(s,"");

	

	
	return 0;
}
