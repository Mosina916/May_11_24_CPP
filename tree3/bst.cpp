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



// bool searchkeyinbst(node* root,int key){
// 	// base case
// 	if(root==NULL){
// 		return false;
// 	}
// 	// rec case
// 	if(key==root->data){
// 		return true;
// 	}
// 	else if(key<root->data){
// 		return searchintree(root->left,key);
// 	}
// 	else{
// 		return searchintree(root->right,key);
// 	}

// }




void printinrangek1andk2(node*root,int k1,int k2){
	// base case
	if(root==NULL){
		return;
	}


	// rec case
	printinrangek1andk2(root->left,k1,k2);//4 6 7
	if(root->data>=k1 and root->data<=k2){
		cout<<root->data<<" ";//8
	}
	printinrangek1andk2(root->right,k1,k2);//10 13

}

bool isbstornot(node*root,int mi=INT_MIN,int ma=INT_MAX){
	if(root==NULL){
		return true;
	}



	if(root->data>=mi and root->data<=ma and (isbstornot(root->left,mi,root->data)) and (isbstornot(root->right,root->data+1,ma))){
		return true;
	}
	return false;

}
// tc-->0(n^2)
// bool checkheightbalanced(node*root){
// 	if(root==NULL){
// 		return true;
// 	}

// 	int x=height(root->left);
// 	int y=height(root->right);
// 	if(abs(x-y)<=1 and checkheightbalanced(root->left) and checkheightbalanced(root->right)){
// 		return true;
// 	}
// 	return false;
// }
class A{
public:
	bool isb;
	int h;
	A(){
		isb=true;
		h=0;
	}
};


A ishbalfast(node*root){
	A z;

	// base case
	if(root==NULL){
		return z;

	}



	// rec case
	A x=ishbalfast(root->left);

	A y=ishbalfast(root->right);
	z.h=max(x.h,y.h)+1;

	if(x.isb==true and y.isb==true and abs(x.h-y.h)<=1){
		z.isb=true;
	}
	else{
		z.isb=false;
	}

	return z;

}

int main(){

	node*root=buildbst();
	// printlevelwise(root);

	A f=ishbalfast(root);
	if(f.isb==true){
		cout<<"tree is balanced"<<endl;
	}
	else{
		cout<<"tree is not balanced"<<endl;

	}

	// if(isbstornot(root)==true){
	// 	cout<<"yes"<<endl;
	// }
	// else{
	// 	cout<<"no"<<endl;
	// }

	// printinrangek1andk2(root,6,13);

	return 0;
}