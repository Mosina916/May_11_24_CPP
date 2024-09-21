#include<iostream>
using namespace std;
void multt(int *arr,int &dti,int i){//2 5
	int carr=0;
	int j;
	for(j=0;j<dti;j++){
		int m=arr[j]*i+carr;//12
		arr[j]=m%10;
		carr=m/10;//1


	}
	while(carr>0){
		arr[j]=carr%10;
		j++;
		dti++;
		carr=carr/10;//0



	}


}
void fact(int n){
	int arr[10000];
	arr[0]=1;
	int dti=1;
	for(int i=1;i<=n;i++){
		multt(arr,dti,i);

	}

	for(int k=dti-1;k>=0;k--){
		cout<<arr[k];
	}
	

}
int main(){
	int n;
	cin>>n;//5

	fact(n);
	cout<<endl;



	return 0;
}