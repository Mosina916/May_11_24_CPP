#include<iostream>
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
node* buildtree(){
	int d;
	cin>>d;
	if(d==-1){
		return NULL;
	}
	node*root=new node(d);
	root->left=buildtree();//lst
	root->right=buildtree();//rst

	return root;

}

void preorder(node*root){
	if(root==NULL){
		return;
	}

	// 
	cout<<root->data<<" ";//
	preorder(root->left);//lst
	preorder(root->right);//rst


}
void inorder(node*root){
	if(root==NULL){
		return;
	}

	// 	
	inorder(root->left);//lst
	cout<<root->data<<" ";//
	
	inorder(root->right);//rst


}
void postorder(node*root){
	if(root==NULL){
		return;
	}

	// 	
	postorder(root->left);//lst
	postorder(root->right);//rst
	cout<<root->data<<" ";//

}

int height(node*root){
	if(root==NULL){
		return 0;
	}


	return max(height(root->left),height(root->right))+1;
}


int countofnode(node*root){
	if(root==NULL){
		return 0;
	}


	return countofnode(root->left)+countofnode(root->right)+1;
}

int sumofnode(node*root){
	if(root==NULL){
		return 0;
	}


	return sumofnode(root->left)+sumofnode(root->right)+root->data;
}


bool searchintree(node*root,int key){
	if(root==NULL){
		return false;
		
	}


	if(searchintree(root->left,key)||searchintree(root->right,key)||(root->data==key)){
		return true;
	}
	return false;
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


void mirror(node*root){
	if(root==NULL){
		return;
	}


	swap(root->left,root->right);
	mirror(root->left);//lst

	mirror(root->left);

}


int main(){
	node*root=buildtree();
	// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

	mirror(root);
	preorder(root); 



	// // print
	// // preorder
	// preorder(root);
	// cout<<endl;

	// // inorder

	// inorder(root);
	// cout<<endl;

	// // postorder
	// postorder(root);
	// cout<<endl;

	// cout<<"height of tree is "<<height(root)<<endl;

	// cout<<"count of tree nodes is "<<countofnode(root)<<endl;
	// cout<<"sum of tree nodes is "<<sumofnode(root)<<endl;
	// int key;
	// cin>>key;
	// cout<<"search in tree "<<searchintree(root,key)<<endl;
	// cout<<diameter(root)<<endl;

	return 0;
}