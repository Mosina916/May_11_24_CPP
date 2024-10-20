#include <iostream>

#include <list>
using namespace std;

int main(){

	list<int> l;

	l.push_back(3);
	l.push_back(5);
	l.push_back(13);
	l.push_back(35);
	l.push_back(34);
	l.push_back(56);

	// 3 5 13 35 34 56
	// for each loop
	// for(auto anyname:datstructurename){

	// }
	for(auto x:l){
		cout<<x<<" ";
	}

	cout<<endl;




	

	return 0;
}