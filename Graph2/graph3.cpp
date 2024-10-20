#include <iostream>
#include <list>
#include <unordered_map>
#include <queue>
using namespace std;
template<typename U>
class Graph{
	unordered_map<U,list<U> >h;
public:
	void addedge(U u,U v,bool birdir=true){
		h[u].push_back(v);
		if(birdir){
			h[v].push_back(u);
		}

	}


	void printgraph(){
		for (auto x:h)
		{
			cout<<x.first<<"--> ";
			for(auto p:x.second){
				cout<<p<<" ";
			}
			cout<<endl;
		}
	}


	void dfs(U src,unordered_map<int,bool> &visited){
		// cout<<src<<" ";//0 
		visited[src]=true;
		for(auto x:h[src]){//1 
			if(!visited[x]){
				dfs(x,visited);
			}
		}

	}


	
int totalcomponents(U src){
	int tcomp=1;
	 unordered_map<int,bool> visited;
	dfs(src,visited);

	for(auto d: h){
		if(!visited[d.first]){
			tcomp++;//3
			dfs(d.first,visited);

		}
	}


	return tcomp;

}



};



int main(){
	Graph<int> g;

	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(1,3);
	g.addedge(4,3);
	g.addedge(1,2);
	g.addedge(2,3);


	g.addedge(30,70);
	g.addedge(70,90);
	g.addedge(90,30);



	g.addedge(40,50);
	g.addedge(40,20);
	g.addedge(20,170);
	g.addedge(170,50);


	// g.printgraph();



	// unordered_map<int,bool> visited;


	cout<<g.totalcomponents(0)<<endl;


	// g.dfs(0,visited);

	

	return 0;
}