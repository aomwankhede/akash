#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node *createNode(int d){
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
    if(root=NULL){return false;}
    if(isBST(root->left))
    {
      
    }
    return false;
 }
int main()
{
    node * p=createNode(1);
    node * p2=createNode(2);
    node * p3=createNode(3);
    node * p4=createNode(4);
    node * p5=createNode(5);
    node * p6=createNode(6);
    node * p7=createNode(7);
    node * p8=createNode(8);
    node * p9=createNode(9);
    node * p10=createNode(10);
    node * p11=createNode(11);
    node * p12=createNode(12);
    node * p13=createNode(13);
    node * p14=createNode(14);
    p->right=p3;
    p->left=p2;
    p2->left=p4;
    p2->right=p5;
    p3->left=p6;
    p3->right=p7;
    p4->left=p8;
    p4->right=p9;
    p5->left=p10;
    p5->right=p11;
    p7->left=p14;
    p6->right=p13;
    PreTraversal(p);
    return 0;
}