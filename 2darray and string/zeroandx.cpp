#include<iostream>
using namespace std;
void zeoxprint(char arr[100][100],int tc,int tr){
 	int sr=0,sc=0,er=tr-1,ec=tc-1;
 	char ch='O';
 	while(sr<=er and sc<=ec){
 		// f
 		for(int j=sc;j<=ec;j++){
 			arr[sr][j]=ch;
 		}
 		sr++;

 		// d
 		for(int k=sr;k<=er;k++){
 			arr[k][ec]=ch;
 		}
 		ec--;

 		// b
 		if(sr<=er){
 			for(int l=ec;l>=sc;l--){
 				arr[er][l]=ch;
 			}
 		}
 		er--;

 		// u
 		if(sc<=ec){
 			for(int m=er;m>=sr;m--){
 				arr[m][sc]=ch;
 			}
 		}
 		sc++;
 		if(ch=='O'){
 			ch='X';
 		}
 		else{
 			ch='O';
 		}
 	}
}
int main(){
	char arr[100][100];
	int tr,tc;
	cin>>tr>>tc;//7 8
	
	zeoxprint(arr,tc,tr);


	// print 

	for(int i=0;i<=tr-1;i++){
		for(int j=0;j<=tc-1;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}





	

	return 0;

}