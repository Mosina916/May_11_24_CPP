#include<iostream>
using namespace std;
int main(){
	int *arr=new int[10000];//0x..300
	delete[] arr;

	arr=new int[1000000];//0x..500
	arr=new int[10000000];




	
	return 0;
}