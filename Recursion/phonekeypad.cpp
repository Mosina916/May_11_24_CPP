#include<iostream>
#include<cmath>
using namespace std;
string arr[]={"","","abc","def","ghi","jkl","Mno","pqrs","Tuv","Wxyz"};
void phonekeypad(char inp[100],int i,char out[100],int j){

	// base case
	if(inp[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}


	// rec case
	char ch=inp[i];//'2'
	int index=ch-'0';//'2'-'0'-->2
	for(int k=0;arr[index][k]!='\0';k++){
		out[j]=arr[index][k];
	phonekeypad(inp,i+1,out,j+1);

	}
	

}

int main(){
	char inp[100];
	cin>>inp;//"23"
	char out[100];

	phonekeypad(inp,0,out,0);
	
	


	return 0;
}