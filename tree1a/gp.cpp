#include<iostream>
#include<queue>
using namespace std;
vector<string> v;
int c=0;
void genmeratepar(int n,int oc,int cc,string ans){
	if(cc==n){
		// cout<<ans<<endl;
		v.push_back(ans);

		// c++;
		return;
	}
	if(oc<n){
		genmeratepar(n,oc+1,cc,ans+'(');
	}
	if(cc<oc){
		genmeratepar(n,oc,cc+1,ans+')');

	}
}

int main(){
	int n;
	cin>>n;
	genmeratepar(n,0,0,"");

	cout<<c<<endl;

	
	

	
	return 0;
}

// class Solution {
// public:
// void genmeratepar(int n,int oc,int cc,string ans,vector<string> &v){
// 	if(cc==n){
// 		// cout<<ans<<endl;
// 		v.push_back(ans);
		
// 		// c++;
// 		return;
// 	}
// 	if(oc<n){
// 		genmeratepar(n,oc+1,cc,ans+'(',v);
// 	}
// 	if(cc<oc){
// 		genmeratepar(n,oc,cc+1,ans+')',v);

// 	}
// }


//     vector<string> generateParenthesis(int n) {
//         vector<string> v;
//         genmeratepar(n,0,0,"",v);
//         return v;
        
//     }
// };