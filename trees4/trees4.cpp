#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node*left;
	node*right;

	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};

int height(node*root){
	if(root==NULL){
		return 0;
	}


	return max(height(root->left),height(root->right))+1;
}

int diameter(node*root){
	if(root==NULL){
		return 0;
	}


	int op1=diameter(root->left);//3
	int op2=diameter(root->right);//3
	int op3=height(root->left)+height(root->right);
	return max(op1,max(op2,op3));

}


void printlevelwise(node*root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* x=q.front();
		q.pop();
		if(x==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<x->data<<" ";
			if(x->left!=NULL){
				q.push(x->left);
			}
			if(x->right!=NULL){
				q.push(x->right);
			}
		}
	}
}



node* insertioninbst(node*root,int da){//300 10
	if(root==NULL){
		root=new node(da);
		return root;//300

	}
	else if(da>root->data){
		root->right=insertioninbst(root->right,da);
		return root;
	}
	else{
		root->left=insertioninbst(root->left,da);
		return root;
	}

}


node* buildbst(){
	node*root=NULL;
	int da;
	cin>>da;//8

	while(da!=-1){
	root=insertioninbst(root,da);//300 3
	cin>>da;//2
}

return root;

}
class ll{
public:
	node*h;
	node*t;
	ll(){
		h=NULL;
		t=NULL;
	}
};

ll bsttosortedll(node*root){
	ll z;
	if(root==NULL){
		return z;
	}

	if(root->left==NULL and root->right==NULL){
		z.h=root;
		z.t=root;
		return z;
	}
	else if(root->left!=NULL and root->right==NULL){
		ll x=bsttosortedll(root->left);
		x.t->right=root;
		z.h=x.h;
		z.t=root;
		return z;
	}
	else if(root->left==NULL and root->right!=NULL){
		ll y=bsttosortedll(root->right);
		root->right=y.h;//link
		z.h=root;
		z.t=y.t;
		return z;

	}
	else{
		ll x=bsttosortedll(root->left);
		ll y=bsttosortedll(root->right);
		x.t->right=root;
		root->right=y.h;
		z.h=x.h;
		z.t=y.t;
		return z;


	}

}

void printll(node* root){


	while(root!=NULL){
	cout<<root->data<<" ";
	root=root->right;
}
cout<<endl;

}


node* deletioninbst(node*root,int key){
	if(root==NULL){
		return root;
	}
	// agar root pe kya hai
	if(key==root->data){
		if(root->left==NULL and root->right==NULL){
		delete root;
		root=NULL;
		return root;
	}
	
	else if(root->left!=NULL and root->right==NULL){
		node*x=root->left;
		delete root;
		return x;

	}
	
	else if(root->left==NULL and root->right!=NULL){
		node*x=root->right;
		delete root;
		return x;
		
	}
	else{
		node *p=root->left;

		while(p->right!=NULL){
			p=p->right;
		}
		//p will be at 7
		swap(p->data,root->data);
		root->left=deletioninbst(root->left,key);
		return root;


	}

	}
	// agar key lst mai hai
	else if(key<root->data){
		root->left=deletioninbst(root->left,key);
		return root;
	}
	// agar key rst mai hai
	else{
		root->right=deletioninbst(root->right,key);
		return root;

	}



}


void rightview(node*root,int cl,int &ml){
	if(root==NULL){
		return;
	}

	if(cl>ml){
		cout<<root->data<<" ";
		ml++;
	}
	rightview(root->left,cl+1,ml);
	rightview(root->right,cl+1,ml);


}


// void rightview(node*root,int cl,int &ml){
// 	if(root==NULL){
// 		return;
// 	}

// 	if(cl>ml){
// 		cout<<root->data<<" ";
// 		ml++;
// 	}
// 	rightview(root->left,cl+1,ml);
// 	rightview(root->right,cl+1,ml);
// }

void leftview(node*root,int cl,int &ml){
	if(root==NULL){
		return;
	}

	if(cl>ml){
		cout<<root->data<<" ";
		ml++;
	}
	leftview(root->right,cl+1,ml);
	leftview(root->left,cl+1,ml);
}





int main(){

	node*root=buildbst();
	int l=0;

	leftview(root,1,l);
	// rightview(root,1,l);
	// ll d=bsttosortedll(root);
	// printll(d.h);
	// int key;
	// cin>>key;
	// printlevelwise(root);

	// node*h=deletioninbst(root,key);
	// printlevelwise(h);
	
	return 0;
}