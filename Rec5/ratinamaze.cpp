#include<iostream>
using namespace std;
int c=0;
int sol[100][100]={0};
bool ratinamaze(char mat[5][5],int i,int j,int tr,int tc){
	// base case
	if(i==tr-1 and j==tc-1){
		sol[i][j]=1;
		for (int k = 0; k <tr; k++)
		{
			for (int l = 0; l <tc ; l++)
			{
				cout<<sol[k][l]<<" ";
			}
			cout<<endl;
		}
		c++;

		// return true;
		sol[i][j]=0;

		return false;
	}


	// rec. case
	sol[i][j]=1;
	// forward
	if(j<=tc-2 and mat[i][j+1]!='B'){
		bool aagekaans=ratinamaze(mat,i,j+1,tr,tc);
		if(aagekaans==true){
			return true;
		}
	}

	// downward
	if(i<=tr-2 and mat[i+1][j]!='B'){
		bool aagekaans=ratinamaze(mat,i+1,j,tr,tc);
		if(aagekaans==true){
			return true;
		}
	}
	sol[i][j]=0;
	return false;
}
int main(){
	char mat[4][5]={"OOBB",
				"OBBB",
				"OOOO",
				"OBOO"
					};

		int tr=4;
		int tc=4;
		ratinamaze(mat,0,0,tr,tc);
		cout<<c<<endl;



	return 0;
}