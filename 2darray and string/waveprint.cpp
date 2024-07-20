#include<iostream>
using namespace std;
void waveprint(int arr[100][100],int tc,int tr){
 	for (int col = 0; col<=tc-1;col++)
	{
		if(col%2==0){
			// col even 
			for(int r=0;r<=tr-1;r++){
				cout<<arr[r][col]<<" ";
			}
		}
		else{
			// col even 
			for(int r=tr-1;r>=0;r--){
				cout<<arr[r][col]<<" ";
			}

		}
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

	waveprint(arr,tc,tr);

	// for (int col = 0; col<=tc-1;col++)
	// {
	// 	if(col%2==0){
	// 		// col even 
	// 		for(int r=0;r<=tr-1;r++){
	// 			cout<<arr[r][col]<<" ";
	// 		}
	// 	}
	// 	else{
	// 		// col even 
	// 		for(int r=tr-1;r>=0;r--){
	// 			cout<<arr[r][col]<<" ";
	// 		}

	// 	}
	// }




	

	return 0;

}