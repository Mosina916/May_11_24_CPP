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

	void addedge(U u,U v,bool birdir=false){
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


	int sssp(U src,U dest){//0 36
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

	return distance[dest];
	



	}



};

int main(){
	Graph<int> g;

	int board[50]={0};
	board[2]=13;
	board[5]=2;
	board[9]=18;
	board[17]=-13;
	board[18]=11;
	board[20]=-14;
	board[24]=-8;
	board[25]=10;
	board[32]=-2;
	board[34]=-22;

	cout<<"hello welcome to game  there are two players in the game ram and sham";

	





	for(int src=0;src<=35;src++){
		for(int dice=1;dice<=6;dice++){//2

	int dest=src+dice+board[src+dice];
	g.addedge(src,dest);
}

	}


	cout<<g.sssp(0,36)<<endl;
	



	

	

	return 0;
}