#include<iostream>

#include<cstring>
using namespace std;

int main(){
	// char arr[100];
	// cin.getline(arr,100);

	// string s="heloo bsdfg";
	// string s;//"hello"
	// // cin>>s;
	// // getline(cin,stringname);
	// getline(cin,s);
	// cout<<s<<endl;

	// stl-->standard template library

	// cout<<s.length()<<endl;
	// + -->concatenation-->append
	// string s="elephant";
	// string s1="hello";
	// s.swap(s1);

	// cout<<s<<endl;

	// string s2=s1+s;
	// cout<<s2<<endl;

	// // cout<<s1+s<<endl;
	// cout<<s+s1<<endl;


	// push_back-->single char push 

	// string s="hel";
	// s.push_back('l');
	// s.push_back('o');

	// s.pop_back();

	// cout<<s<<endl;


	// string s="nursesrunhello";

	// cout<<s.at(2)<<endl;

	// // s.substr(index);//


	// cout<<s.substr(3)<<endl;
	// cout<<s.substr(6)<<endl;


	// // s.substr(index,countofchar);//
	// // cout<<s.substr(4,6)<<endl;


	// // string s="elephantttt";
	// // string s1="elephantt";

	// 	string s="rat";
	// string s1="elephantttt";

	// if(s>s1){
	// 	cout<<"s is larger"<<endl;
	// }
	// else{
	// 	cout<<"s1 is larger"<<endl;
	// }


	// string s="codingblocks";
	string s="code";
	int n;
	cin>>n;
	n=n%s.length();
	// n-->3
	// ckscodingblo

	string h=s.substr(0,s.length()-n);//'codingblo'

	string p=s.substr(s.length()-n);//"cks"

	cout<<p+h<<endl;








	return 0;

}