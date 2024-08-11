#include <iostream>
#include<algorithm>
using namespace std;
void multiply(int arr[1000],int &noofplacetoiterate,int notomultiply){
	int carry=0;

	for(int j=0;j<noofplacetoiterate;j++){
		int product=arr[j]*notomultiply+carry;//12
	arr[j]=product%10;
	carry=product/10;//20/10-->2

	}

	while(carry>0){
		arr[noofplacetoiterate]=carry%10;//2
		carry=carry/10;//0
		noofplacetoiterate++;//3
		

	}
	


}
void factorial(int n){
	int arr[1000]={0};
	arr[0]=1;
	int noofplacetoiterate=1;
	for(int i=1;i<=n;i++){//6
	multiply(arr,noofplacetoiterate,i);
}
for(int k=noofplacetoiterate-1;k>=0;k--){
	cout<<arr[k];//120
}
cout<<endl;



}
int main(){

	int n;
	cin>>n;//6
	factorial(n);
	return 0;
}

https://github.com/Mosina916/CPP_JULY24
