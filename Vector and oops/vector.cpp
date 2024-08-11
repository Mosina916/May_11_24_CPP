#include <iostream>
#include <vector>
using namespace std;
int main(){
	// vector<dt> name;
	// vector<int> v;
	// v.push_back(30);
	// v.push_back(70);
	// v.push_back(80);

	// cout<<v.size()<<endl;//3
	// cout<<v.capacity()<<endl;//4


	// v.push_back(20);
	// v.push_back(10);

	// cout<<v.at(3)<<endl;//5
	// cout<<v.front()<<endl;//5
	// cout<<v.back()<<endl;//5

	// cout<<v.size()<<endl;//5
	// cout<<v.capacity()<<endl;//8

	// if(v.empty()){
	// 	cout<<"v is empty"<<endl;
	// }

	// else{
	// 	cout<<"v is not empty"<<endl;

	// }


	// for(auto x=v.begin();x!=v.end();x++){
	// 	cout<<*x<<" ";
	// }


	// v.pop_back();
	// v.pop_back();
	// v.pop_back();

	// cout<<v.size()<<endl;//2
	// cout<<v.capacity()<<endl;//8
	vector<int> v;
	int n;
	cin>>n;//6

	for(int i=0;i<n;i++){
		int d;
		cin>>d;
		v.push_back(d);
	}


		// print
	for(auto x=v.begin();x!=v.end();x++){
		cout<<*x<<" ";
	}









	return 0;
}