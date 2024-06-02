
#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;//'?'
	if(ch>='A' and ch<='Z'){
		cout<<"UPPERCASE"<<endl;

	}
	else if(ch>='a' and ch<='z'){
		cout<<"lowercase"<<endl;
		
	}
	else{
		cout<<"some other character "<<endl;

	}
	


	return 0;
}