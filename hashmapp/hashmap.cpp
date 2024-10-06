#include<iostream>
using namespace std;
class node{
public:
	string fname;
	string fcol;
	node* next;
	node(string fn,string fc){
		fname=fn;
		fcol=fc;
		next=NULL;

	}
};

class hashmap{
	node**arr;
	int ts;
	int cs;
public:
	hashmap(int size){
		arr=new node*[size];
		for (int i = 0; i <size; ++i)
		{
			arr[i]=NULL;
			
		}
		ts=size;
		cs=0;
	}

	void rehashing(){
		node**oldarr=arr;
		int oldts=ts;//7
		arr=new node*[2*ts];
		ts=2*ts;//14
		cs=0;
		for (int i = 0; i <ts; ++i)
		{
			arr[i]=NULL;
		}

		// tranfer from oldarr to arr
		for(int k=0;k<oldts;k++){
		node*temp=oldarr[k];//100

		while(temp!=NULL){
		insert(temp->fname,temp->fcol);
		temp=temp->next;
	}
	}


	delete []oldarr;
	oldarr=nullptr;





	}

	int hashfunction(string s){
		int ans=0;
		int mult=1;
		for (int i = 0; i <=s.length()-1; ++i)
		{
			ans=((ans%ts)+(s[i]%ts*mult%ts)%ts)%ts;
			mult=mult*31;

		}
		return ans;
	}


	// insert
	void insert(string fn,string fc){
		int indx=hashfunction(fn);//1
		node*n=new node(fn,fc);
		n->next=arr[indx];
		arr[indx]=n;
		cs++;
		if(cs*1.0/ts>0.5){//4/7
		rehashing();
		}
	}


	void hashmapprint(){
		for(int i=0;i<ts;i++){
			cout<<i<<" : ";
			node*temp=arr[i];

			while(temp!=NULL){
			cout<<"( "<<temp->fname<<", "<<temp->fcol<<"), ";
			temp=temp->next;
}

			cout<<endl;

		}
	}


	bool search(string x){

		int index=hashfunction(x);
		node*temp=ar[index];
		while(temp!=NULL){
		if(temp->fname==x){
			return true;
		}
		temp=temp->next;
	}

	}


	void deleteinhm(string c){//bac
		if(search(c)==true){
			// delete
			int index =hashfunction(c);//5

		}


	}




};



int main(){
	hashmap h(7);
	h.insert("mango","yellow");
	h.insert("apple","red");
	h.insert("banana","yellow");

	h.insert("abc","yellow");
		h.hashmapprint();
		h.search("azs");
		h.delete("mango");//to find index




	return 0;
}