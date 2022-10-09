#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node *getNode(int d){
    node*p=(node*)malloc(sizeof(node));
    p->data=d;
    p->left=NULL;
    p->right=NULL;
    return p;
}
void PreTraversal(node*root){
    if(root==NULL){
        return;
     }
     cout<<(root->data)<<" ";
     PreTraversal(root->left);
     PreTraversal(root->right);
     }
     int arr[5];
int i=0;
void inOrderTraversal(node *root){
    if(root==NULL){return;}
    inOrderTraversal(root->left);
    arr[i]=root->data;
    i++;
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
void postOrderTraversal(node *root){
    if(root==NULL){return;}
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
       cout<<root->data<<" ";
}
bool isBST(node*root){
    static node * prev=NULL;
    if(root==NULL){return true;}
    if(isBST(root->left))
    {
      if(prev!=NULL && root->data <= prev->data){return false;}
      prev=root;
      return isBST(root->right);
    }
    return false;}
int main(){
node * root =getNode(5);                           
  node *p2=getNode(3);                           
  node *p3=getNode(6);
  node *p4=getNode(1);
  node *p5=getNode(9);
  root->left=p2;
  root->right=p3;
  p2->left=p4;
  p2->right=p5;
  inOrderTraversal(root);
  cout<<endl;
  postOrderTraversal(root);
  cout<<endl;
  cout<<"Is binary tree ?"<<endl;
  if(isBST(root)){cout<<"YES"<<endl;}
  else{cout<<"NO"<<endl;}
return 0;
}