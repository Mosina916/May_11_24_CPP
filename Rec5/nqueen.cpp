#include<iostream>
using namespace std;
int sol[100][100]={0};

bool kyaqueenrakhsaktehai(int i,int j,int n){//2 2 

	// vertical check
	for(int l=0;l<i;l++){
		if(sol[l][j]==1){
			return false;
		}
	}

	// diagonal left
	int u=i-1;//1
	int v=j-1;//1

	while(u>=0 and v>=0){
		if(sol[u][v]==1){
		return false;
	}
	u--;
	v--;

	}
	


	//dia right
	int p=i-1;//1
	int q=j+1;//3

	while(p>=0 and q<n){
		if(sol[p][q]==1){
		return false;
	}
	p--;
	q++;

	}



	return true;
	


}

bool nqueen(int n,int i){
	// base case
	if(i==n){
		for (int k = 0; k <n; k++)
		{
			for(int l=0;l<n;l++){
				cout<<sol[k][l]<<" ";
			}
			cout<<endl;
		}
		// return true;
		return false;
	}



	// rec case

	for(int j=0;j<n;j++){
		if(kyaqueenrakhsaktehai(i,j,n)){
		sol[i][j]=1;
		bool aagekaans=nqueen(n,i+1);//true
		if(aagekaans==true){
			return true;
		}
		sol[i][j]=0;
	}

	}
	return false;
	
}

int main(){

	int n;
	cin>>n;//4
	nqueen(n,0);

	



	return 0;
}