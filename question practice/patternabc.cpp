#include <iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;

	

 // 1 to tr-1 
	// +++++++++++++++++++++++++++++++++++++++
		int row=1;
		while(row<=tr-1){
		// star
	int i=1;
	while(i<=row){
		cout<<'*'<<'\t';
		i=i+1;
	}


	// space
	int j=1;
	while(j<=2*tr-1-2*row){
		cout<<' '<<'\t';
		j=j+1;
	}

	// star
	int l=1;
	while(l<=row){
		cout<<'*'<<'\t';
		l=l+1;
	}
	cout<<endl;
	row=row+1;
}

		
	// +++++++++++++++++++++++++++++++++++++++

	//last row

	// -------------------------------------------
	int p=1;
	while(p<=2*tr-1){
		cout<<'*'<<'\t';
		p=p+1;
	}

	cout<<endl;

		
	// -------------------------------------------


	return 0;
	}
