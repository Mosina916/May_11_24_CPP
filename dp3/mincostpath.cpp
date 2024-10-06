#include <iostream>
using namespace std;
// int mincostpath(int cost[3][4],int x,int y){

// 	if(x==0 and y==0){
// 		return cost[x][y];
// 	}
// 	if(x<0||y<0){
// 		return INT_MAX;
// 	}

// 	int op1=mincostpath(cost,x-1,y);
// 	int op2=mincostpath(cost,x,y-1);
// 	return min(op1,op2)+cost[x][y];

// }
int mincostpath(int cost[3][4],int x,int y,int arr[100][100]){

	if(x==0 and y==0){
		return arr[x][y]=cost[x][y];
	}
	if(x<0||y<0){
		return INT_MAX;
	}

	if(arr[x][y]!=-1){
		return arr[x][y];
	}

	int op1=mincostpath(cost,x-1,y,arr);
	int op2=mincostpath(cost,x,y-1,arr);
	return arr[x][y]=min(op1,op2)+cost[x][y];

}
int main(){
	int x,y;
	cin>>x>>y;//2 3
	int cost[3][4]={{2,3,1,2},
				    {3,4,1,3},
				    {2,1,2,5}
				 	};


				 	// cout<<mincostpath(cost,x,y)<<endl;

				 	int arr[100][100];
				 	for (int i = 0; i <100; ++i)
				 	{
				 		for (int j = 0; j <100 ; j++)
				 		{
				 			arr[i][j]=-1;
				 		}
				 	}


				 	cout<<mincostpath(cost,x,y,arr)<<endl;

				 	for (int i = 0; i <=x; ++i)
				 	{
				 		for (int j = 0; j <=y; j++)
				 		{
				 			cout<<arr[i][j]<<" ";
				 		}
				 		cout<<endl;
				 	}



	return 0;
}