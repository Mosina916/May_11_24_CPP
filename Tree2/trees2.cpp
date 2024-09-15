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


node* buildtreelevelwise(){
	cout<<"enter the data of root"<<endl;

	int d;
	cin>>d;//-1
	if(d==-1){
		return NULL;
	}
	node*root=new node(d);//
	queue<node*> q;
	q.push(root);

	while(!q.empty()){
	node*x=q.front();//100
	q.pop();

	cout<<"enter left child and right child of "<<x->data<<endl;
	int lc,rc;
	cin>>lc>>rc;//-1 14

		if(lc!=-1){
		x->left=new node(lc);
		q.push(x->left);
	}
	if(rc!=-1){
		x->right=new node(rc);
		q.push(x->right);
	}

}
return root;
}


class P{
public:
	int d;
	int h;
	P(){
		d=0;
		h=0;
	}


};

P diafast(node*root){
	P z;
	if(root==NULL){
		return z;
	}


	P x=diafast(root->left);
	P y=diafast(root->right);

	z.h=max(x.h,y.h)+1;

	// dia set 
	int op1=x.d;
	int op2=y.d;
	int op3=x.h+y.h;
	z.d=max(op1,max(op2,op3));

	return z;

}
void inorder(node*root){
	if(root==NULL){
		return;
	}

	// 	
	inorder(root->left);//lst
	cout<<root->data<<",";//
	
	inorder(root->right);//rst


}

void preorder(node*root){
	if(root==NULL){
		return;
	}

	// 
	cout<<root->data<<",";//
	preorder(root->left);//lst
	preorder(root->right);//rst


}

int preo[]={8,10,1,6,4,7,3,14,13};//rootn lst rst
int inor[]={1,10,4,6,7,8,3,13,14};//lst root rst
int i=0;
node* buildtreeusingpreoandino(int s,int e){//0 8
	if(s>e){
		return NULL;
	}

	int d=preo[i];//8
	i++;
	node*root=new node(d);
	int k;
	for (int j = s; j <=e; j++)
	{
		if(d==inor[j]){//5
			k=j;//5
			break;

		}
	}

	// k-->5
	root->left=buildtreeusingpreoandino(s,k-1);

	root->right=buildtreeusingpreoandino(k+1,e);

	return root;






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






int main(){
	int n=sizeof(preo)/sizeof(int);//9
	node*root=buildtreeusingpreoandino(0,n-1);
	printlevelwise(root);







	// node*root=buildtree();

	// inorder(root);
	// cout<<endl;
	// preorder(root);
	// cout<<endl;



	// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

	// node*root=buildtreelevelwise();
	// // printlevelwise(root);
	// P a=diafast(root);

	// cout<<a.d<<endl;
	// cout<<a.h<<endl;


	return 0;
}