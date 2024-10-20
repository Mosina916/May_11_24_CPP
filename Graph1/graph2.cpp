#include <iostream>
#include <list>
#include <unordered_map>
#include <queue>
using namespace std;
template<typename U>
class Graph{
	// unordered_map<string,list<string> >h;
	// unordered_map<int,list<int> >h;
	unordered_map<U,list<U> >h;
public:
	// void addedge(string u,string v,bool birdir=false){
	// void addedge(int u,int v,bool birdir=true){
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

	// void bfs(U src){
	// 	queue<U> q;
	// 	q.push(src);

	// 	unordered_map<U,bool> visited;
	// 	visited[src]=true;
	// 	while(!q.empty()){

	// 	U x=q.front();//2
	// 	q.pop();
	// 	cout<<x<<" ";//0 1 4 3 2
	// 	for(auto k:h[x]){//1 3 
	// 		if(!visited[k]){
	// 			q.push(k);
	// 			visited[k]=true;
	// 		}


	// 	}
	// }


	// }



	// void distancetoallnodes(U src){//0
	// 	queue<U> q;
	// 	q.push(src);

	// 	unordered_map<U,bool> visited;
	// 	visited[src]=true;
	// 	unordered_map<U,int> distance;
	// 	distance[src]=0;

	// 	while(!q.empty()){

	// 	U x=q.front();//4
	// 	q.pop();
	// 	cout<<x<<" ";//0 1
	// 	for(auto k:h[x]){//01 3 
	// 		if(!visited[k]){
	// 			q.push(k);
	// 			visited[k]=true;
	// 			distance[k]=distance[x]+1;
	// 		}


	// 	}
	// }


	// for(auto z:distance){
	// 	cout<<"distance from "<<src<<" to "<<z.first<<" is "<<z.second<<endl;
	// }


	// }


	void sssp(U src,U dest){//0
		queue<U> q;
		q.push(src);

		unordered_map<U,bool> visited;
		visited[src]=true;
		unordered_map<U,int> distance;
		distance[src]=0;
		unordered_map<U,U> parent;
		parent[src]=src;

		while(!q.empty()){

		U x=q.front();//0
		q.pop();
		// cout<<x<<" ";//0
		for(auto k:h[x]){//1 4
			if(!visited[k]){
				q.push(k);
				visited[k]=true;
				distance[k]=distance[x]+1;
				parent[k]=x;
			}


		}
	}


	U a=dest;//3
	while(a!=src){
		cout<<a<<"<--";
	a=parent[a];//0

	}
	cout<<a<<endl;
	



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
	// g.distancetoallnodes(0);

	g.sssp(0,3);

	// g.bfs(0);



	// g.addedge("Modi","Trump",true);
	// g.addedge("Modi","yogi",true);
	// g.addedge("prabhu","Modi");
	// g.addedge("yogi","prabhu");
	// g.addedge("putin","Modi");
	// g.addedge("putin","Trump");
	// g.addedge("putin","Pope");

	// g.addedge("pope","");


	

	// g.printgraph();


	

	return 0;
}