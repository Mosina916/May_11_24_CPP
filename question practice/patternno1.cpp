#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;

	int row=1;
	while(row<=tr){



	// space
	int i=1;
	while(i<=tr-row){
		cout<<" ";
		i=i+1;
	}


	// star
	int stno=row;
	int j=1;
	while(j<=row){
		cout<<stno;
		stno=stno+1;
		j=j+1;
	}


	// hash
	int k=1;

	int startno=2*row-2;
	while(k<=row-1){
		cout<<startno;
		startno=startno-1;
		k=k+1;
	}

	cout<<endl;
	row=row+1;

}



	return 0;
}