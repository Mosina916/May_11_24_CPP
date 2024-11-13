#include<iostream>
#include<set>
using namespace std;

int main(){


	int arr[]={2,4,2,2,1,4,1,43,2,21,3,2,1,1,1,2,3,34,5,5,9};
	int n=sizeof(arr)/sizeof(int);
	set<int> s;
	for (int i = 0; i <n; ++i)
	{
		s.insert(arr[i]);
	}

	// s.insert(3);
	// s.insert(13);
	// s.insert(30);
	// s.insert(3);

	for (auto x : s) {
       cout << x << ' ';
    }



	return 0;
}