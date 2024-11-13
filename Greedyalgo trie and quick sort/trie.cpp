#include <iostream>
#include <unordered_map>
using namespace std;
class node{
public:
	char ch;
	bool isterminal;
	unordered_map<char,node*> h;
	node(char c){
		ch=c;
		isterminal=false;

	}
};

// h.count('a');

class trie{
	node*root;
public:
	trie(){
		root=new node('\0');
	}

	void insert(string s){//coding
		node*temp=root;

		for(int i=0;s[i]!='\0';i++){
		char x=s[i];//g
		if(temp->h.count(x)){
			temp=temp->h[x];

		}
		else{
			temp->h[x]=new node(x);
			temp=temp->h[x];

		}

	}

	temp->isterminal=true;



	}

	bool search(string s){//cap
		node*temp=root;
		for (int i = 0; s[i]!='\0'; ++i)
		{
			char x=s[i];//t
			if(temp->h.count(x)){
				temp=temp->h[x];

			}
			else{
				return false;
			}

			
		}

		return temp->isterminal;
	}


};


int main(){
	trie t;
	t.insert("cod");
	t.insert("code");
	t.insert("coder");
	t.insert("coding");
	t.insert("dog");
	t.insert("cat");


	if(t.search("code")){
		cout<<"present"<<endl;
	}
	else{
		cout<<"not present"<<endl;

	}


}
