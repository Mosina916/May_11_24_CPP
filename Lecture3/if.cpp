#include <iostream>
using namespace std;
int main(){

	// single if

	// if(condition){
	// 	// task
	// }
	// int age;
	// // age=90;
	// cin>>age;


	// if(age>=30){
	// 	cout<<"i will gift you a car"<<endl;
	// }


	int age;
	// age=90;
	cin>>age;


	// if(condition){//true
	// 	// task
	// }
	// else{
	// 	// false

	// }

	// if(age>=30){//true
	// 	cout<<"i will gift you a car"<<endl;
	// }
	// else{
	// 	cout<<"i will gift you a phone"<<endl;

	// }


	// if(condition){//true
	// 	// task
	// }
	// else if(condition){

	// }
	// else if(condition){

	// }
	// else if(condition){

	// }
	// else if(condition){

	// }
	// else if(condition){

	// }

	// else{
	// // task

	// }


	if(age>=30){
		cout<<"i will gift you a car"<<endl;

	}
	else if(age<10){
		cout<<"i will gift you a toy"<<endl;
	}

	else if(age==20){
		cout<<"i will gift you a phone"<<endl;
	}
	else if(age==15){

		cout<<"i will gift you a nothing"<<endl;
	}
	else{
		cout<<"get lost"<<endl;
	}


	return 0;
}