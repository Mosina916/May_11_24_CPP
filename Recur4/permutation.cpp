#include<iostream>
using namespace std;
int co=0;
void permutation(char *inp,int i){//0
	// base case
	if(inp[i]=='\0'){
		cout<<inp<<endl;
		return;
	}
	
	// rec case
	for(int j=i;inp[j]!='\0';j++){
		swap(inp[i],inp[j]);
		permutation(inp,i+1);
		swap(inp[i],inp[j]);//backtracking

	}
	
}
int main(){
	// abc -->abc acb bac bca cab cba

	char inp[100];
	cin>>inp;

	permutation(inp,0);
	

	return 0;
}