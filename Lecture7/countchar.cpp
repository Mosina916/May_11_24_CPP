#include<iostream>
using namespace std;
// cin-->ignore whitespaces-->' '.'\t','\n'
int main(){
	 char ch;
	 // cin>>ch;

	 ch=cin.get();
	 int co=0;


	 while(ch!='$'){
	 	co++;
	 	// cin>>ch;
	 	 ch=cin.get();

	 }
	 cout<<co<<endl;
	

	

	
	return 0;
}