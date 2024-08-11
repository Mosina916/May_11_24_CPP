#include<iostream>
#include<cmath>
using namespace std;
bool kyarakhsaktehai(int mat[9][9],int i,int j,int num,int n){ //7 4 1
	// row check
	for(int l=0;l<n;l++){
		if(mat[i][l]==num){
			return false;
		}
	}


	// col check
	for(int k=0;k<n;k++){
		if(mat[k][j]==num){
			return false;
		}
	}



	// root(n)*root(n)

	int p=sqrt(n);//3

	int si=(i/p)*p;//6
	int sj=(j/p)*p;//3


	for(int u=si;u<si+p;u++){//7
	for(int v=sj;v<sj+p;v++){//3
	if(mat[u][v]==num){
		return false;
	}
}
}

return true;


	


}
bool sudukosolver(int mat[9][9],int i,int j,int n){
	// base case
	if(i==n){
		for(int l=0;l<n;l++){
			for(int k=0;k<n;k++){
				cout<<mat[l][k]<<" ";
			}

			cout<<endl;
		}


		return false;


		// return true;
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
			if(kyarakhsaktehai(mat,i,j,num,n)){
				mat[i][j]=num;
				bool aagekaans=sudukosolver(mat,i,j+1,n);
				if(aagekaans==true){
					return true;
				}
				mat[i][j]=0;

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