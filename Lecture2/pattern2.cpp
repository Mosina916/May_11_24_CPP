#include <iostream>
using namespace std;
// *****
// ****
// ***
// **
// *

int main(){
	int tr;
	cin>>tr;
	int row=1;
	while(row<=tr){
		int i=1;
		while(i<=tr-row+1){
			cout<<'*';
			i=i+1;
		}
		cout<<endl;
		row=row+1;
	}
	


	return 0;
}