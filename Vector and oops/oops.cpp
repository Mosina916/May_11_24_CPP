#include <iostream>
using namespace std;
class R{
public:
	string cn;
	int cp;
	int cs;
	// R(){
	// 	cout<<"hello"<<endl;

	// }
// synatx
	// nameofclass(){

	// }

	// default constructor
	R(){
		

	}
// parametrized constructor
	R(string cn,int cp,int cs){
		this->cn=cn;
		this->cp=cp;
		this->cs=cs;

	}


	// void setter(){
	// 	cin>>cn;
	// 	cin>>cp;
	// 	cin>>cs;
	// }


	// void getter(){
	// 	cout<<cn<<endl;
	// 	cout<<cp<<endl;
	// 	cout<<cs<<endl;
	// }


};
int main(){
	R t("bmw",400,5);
	// R l;

	// cin>>l.cn;
	// cin>>l.cp;
	// cin>>l.cs;

	// l.setter();
	// l.getter();


	// R y;

	// y.setter();
	// y.getter();


	// cin>>l.cn;


	// R t("bmw",400,5);

	// R p("abc",600,5);

	// R k("lmn",100,5);

	// R l;

	// cout<<t.cn<<endl;
	// cout<<t.cp<<endl;
	// cout<<t.cs<<endl;

	// R s;//s-->object

	// s.cn="Bmw";
	// s.cp=400;
	// s.cs=5;

	// cout<<s.cn<<endl;
	// cout<<s.cp<<endl;
	// cout<<s.cs<<endl;


	// R g;

	// g.cn="abc";
	// g.cp=100;
	// g.cs=5;

	// cout<<g.cn<<endl;
	// cout<<g.cp<<endl;
	// cout<<g.cs<<endl;





	
	


	return 0;
}