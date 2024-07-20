#include<iostream>
using namespace std;
void spiralprint(int arr[100][100],int tc,int tr){
 	int sr=0,sc=0,er=tr-1,ec=tc-1;

 	while(sr<=er and sc<=ec){
 		// f
 		for(int j=sc;j<=ec;j++){
 			cout<<arr[sr][j]<<" ";
 		}
 		sr++;

 		// d
 		for(int k=sr;k<=er;k++){
 			cout<<arr[k][ec]<<" ";
 		}
 		ec--;

 		// b
 		if(sr<=er){
 			for(int l=ec;l>=sc;l--){
 				cout<<arr[er][l]<<" ";
 			}
 		}
 		er--;

 		// u
 		if(sc<=ec){
 			for(int m=er;m>=sr;m--){
 				cout<<arr[m][sc]<<" ";
 			}
 		}
 		sc++;
 	}
}
int main(){
	int arr[100][100];
	int tr,tc;
	cin>>tr>>tc;
	// input
	for (int i = 0; i <=tr-1; ++i)
	{
		for(int j=0;j<=tc-1;j++){
			cin>>arr[i][j];
		}
	}

	spiralprint(arr,tc,tr);





	

	return 0;

}