
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
bool palindrome(char arr[100]){
	int i=0;
	int j=lengthofarr(arr)-1;

	while(i<j){
		if(arr[i]==arr[j]){
			i++;
			j--;
		}
		else{
			return false;
		}
	}
	return true;
}


int main(){
	char arr[100];
	cin.getline(arr,100);//code ing\0
	cout<<arr<<endl;

	cout<<lengthofarr(arr)<<endl;

	if(palindrome(arr)){
		cout<<"yes it is palindrome"<<endl;

	}
	else{

		cout<<"it is not palindrome"<<endl;


	}




	

	

	return 0;

}