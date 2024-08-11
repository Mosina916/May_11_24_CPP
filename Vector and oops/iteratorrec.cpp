#include <iostream>
#include <vector>
using namespace std;
void f(int n){
	if(n==1){
		return;
	}
	// f(--n);//i
	f(n-1);//i

	// f(n--);//is wrong 
	cout<<n<<" ";
}
int main(){
	int n;//10
	cin>>n;

	f(n+1);




	return 0;
}