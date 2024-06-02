#include <iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;
	int row=1;
	while(row<=tr){
		int i=1;
		while(i<=tr-row){
			cout<<' ';
			i=i+1;
		}

		int j=1;
		while(j<=row){
			cout<<'*';
			j=j+1;
		}
		cout<<endl;
		row=row+1;
	}
	


	return 0;
}