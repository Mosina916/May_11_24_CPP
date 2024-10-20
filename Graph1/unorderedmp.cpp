#include <iostream>
#include <unordered_map>
using namespace std;


int main(){
	// unordered_map<keydt,valuedt> name;
	// unordered_map<int,int > > h;
	// // h.insert({3,4});
	// h[3]=4;
	// h[6]=7;
	// h[9]=13;
	unordered_map<string,int > h;
	// h.insert({3,4});
	h["ABc"]=4;
	h["def"]=7;
	h["qwe"]=13;


	for(auto x:h){

		cout<<x.first<<" "<<x.second<<endl;

	}







	

	return 0;
}