#include <iostream>
#include<algorithm>
using namespace std;
bool amiabletoplacetcatmid(int*cows,int dist,int tc,int ts){
	int cp=1;//1
	int cprevpos=cows[0];//1

	for(int i=1;i<ts;i++){
	if(cows[i]-cprevpos>=dist){//3
		cp++;//3
		// cout<<cp<<endl;
		cprevpos=cows[i];//8
		if(cp==tc){
			return true;

		}

	}

}
// if(cp<tc){
	return false;
// }



}
int main(){
	int ts,tc;
	cin>>ts>>tc;
	int cows[1000000];
	for (int i = 0; i <ts; ++i)
	{
		cin>>cows[i];
	}

	sort(cows,cows+ts);//1 2 4 8 9
    // for(int i=0;i<ts;i++){
    //     cout<<cows[i]<<" ";
    // }
    // cout<<endl;

	int s=0;
	int e=cows[ts-1]-cows[0];//8
	int abhitakkaans;
	while(s<=e){
	int mid=(s+e)/2;//1
// cout<<mid<<endl;
	// cout<<amiabletoplacetcatmid(cows,mid,tc,ts)<<endl;
	if(amiabletoplacetcatmid(cows,mid,tc,ts)){
		abhitakkaans=mid;//3

		s=mid+1;
	}
	else{
		e=mid-1;
	}

}

cout<<abhitakkaans<<endl;



	return 0;
}