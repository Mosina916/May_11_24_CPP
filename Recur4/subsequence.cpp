#include<iostream>
using namespace std;
int co=0;
void subsequence(char *inp,int i,char*out,int j){
	// base case
	if(inp[i]=='\0'){
		out[j]='\0';
		co++;
		cout<<out<<endl;//'abc'
		return;

	}



	// rec case
	// with a
	out[j]=inp[i];
	subsequence(inp,i+1,out,j+1);
	// without a
	subsequence(inp,i+1,out,j);

}
int main(){
	char inp[1000];
	cin>>inp;
	char out[1000];
	subsequence(inp,0,out,0);

	cout<<co<<endl;

	return 0;
}