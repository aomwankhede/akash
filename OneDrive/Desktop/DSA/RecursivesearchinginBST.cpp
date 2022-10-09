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
node *search (node *root,int key){
    if(root==NULL){cout<<"ERROR"<<endl;return NULL;}
    if(root->data == key){return root;}
    if(key < root ->data){
        root=root ->left;
        return search(root,key);
    }
    return search(root->right ,key);
}
int main(){
 node *root =getNode(50);
 node *p2 =getNode(40);
 node *p3 =getNode(60);
 node *p4 =getNode(20);
 node *p5 =getNode(45);
 node *p6 =getNode(55);
 node *p7 =getNode(70);
 root->left =p2;
 root->right=p3;
 p2->left=p4;
 p2->right=p5;
 p3->left=p6;
 p3->right =p7;
 int key;
 cout<<"Enter the key ";
 cin>>key;
 cout<<"The "<<key<<" is at node "<<search(root,key)<<endl;
return 0;
}