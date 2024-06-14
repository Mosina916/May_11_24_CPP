#include <iostream>
using namespace std;
	// // *
 // //   ***
 // //  *****
	// *******
	//  *****
 // //   ***
 // //    *
int main(){
	int tr;
	cin>>tr;//7


	// upper half
	// +++++++++++++++++++++++++++++++++++++++
	int row=1;
	while(row<=(tr+1)/2){
		// space 
		int i=1;
		while(i<=(tr+1)/2-row){
			cout<<' '<<'\t';
			i=i+1;
		}

		// star
		int j=1;
		while(j<=2*row-1){
			cout<<'*'<<'\t';
			j=j+1;
		}

		cout<<endl;
		row=row+1;
	}

	// +++++++++++++++++++++++++++++++++++++++


	// lower half 

	// -------------------------------------------

	row=1;
	while(row<=(tr-1)/2){

	// space 
	int k=1;
	while(k<=row){
		cout<<' '<<'\t';
		k=k+1;
	}


	// star
	int l=1;
	while(l<=tr-2*row){
		cout<<'*'<<'\t';
		l=l+1;
	}

	cout<<endl;
	row=row+1;
}


	// -------------------------------------------


	return 0;
}