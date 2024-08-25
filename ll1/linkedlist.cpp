#include<iostream>
using namespace std;
class node{
	public:
	int x;
	node*next;

	node(int d){
		next=NULL;
		x=d;
	}
};
int main(){
	node a(7);
	node b(13);
	a.next=&b;//link

	cout<<a.x<<endl;
	// cout<<(*(a.next)).x<<endl;
	cout<<(a.next)->x<<endl;



	


	return 0;
}