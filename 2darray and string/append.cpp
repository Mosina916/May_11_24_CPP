
#include<iostream>
using namespace std;

int lengthofarr(char *arr){
	int co=0;
	int i=0;
	while(arr[i]!='\0'){
		co++;
		i++;

	}

	return co;
	

}
void append(char a[100],char b[100]){
	int l=lengthofarr(a);
	int m=0;
	while(m<=lengthofarr(b)){
		a[l]=b[m];
		l++;
		m++;
	}

	cout<<a<<endl;
	cout<<b<<endl;

}

int main(){
	char a[100];
	cin.getline(a,100);//code ing\0

	char b[100];
	cin.getline(b,100);//code ing\0

	append(a,b);
	
	




	

	

	return 0;

}