#include <iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;

	//row 1 
	// +++++++++++++++++++++++++++++++++++++++
		int i=1;
		while(i<=tr-1){
			cout<<" ";
			i=i+1;
		}

		// stars
		int j=1;
		while(j<=tr){
			cout<<'*';
			j=j+1;
		}
		cout<<endl;
	// +++++++++++++++++++++++++++++++++++++++


		// /middle rows 
	// +++++++++++++++++++++++++++++++++++++++
		
		int row=1;
		while(row<=tr-2){
			// spaces
			int k=1;
		while(k<=tr-1-row){
			cout<<' ';
			k=k+1;
		}



			// st
		cout<<'*';


			// space
		int l=1;
		while(l<=tr-2){
			cout<<' ';
			l=l+1;
		}


			// st
		cout<<'*';
		cout<<endl;
		row=row+1;

		}
	// +++++++++++++++++++++++++++++++++++++++

	//last row

	// -------------------------------------------

		int p=1;
		while(p<=tr){
			cout<<'*';
			p=p+1;

		}

		cout<<endl;

	// -------------------------------------------


	return 0;
}