#include<iostream>
using namespace std;
bool kyarakhsaktehai(int i,int j,int num){
	// row check


	// col check

	// root(n)*root(n)

	


}
bool sudukosolver(int mat[9][9],int i,int j,int n){
	// base case
	if(i==n){
		for(int l=0;l<=n;l++){
			for(int k=0;k<n;k++){
				cout<<mat[l][k]<<" ";
			}

			cout<<endl;
		}


		return true;
	}


	// rec case
	if(j==n){
		return sudukosolver(mat,i+1,0,n);
	}

	if(mat[i][j]!=0){
		return sudukosolver(mat,i,j+1,n);
	}
	else{
		for(int num=1;num<=9;num++){
			if(kyarakhsaktehai(i,j,num)){
				mat[i][j]=num;
				bool aagekaans=sudukosolver(mat,i,j+1,n);
				if(aagekaans==true){
					return true;
				}
				mat[i][j]=0

			}

		}

		return false;
	}

}

int main(){
	int mat[9][9] =
		{{0,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};


	sudukosolver(mat,0,0,9);

	


	return 0;
}