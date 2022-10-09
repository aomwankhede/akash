#include<iostream>
using namespace std;
int count;
struct node{
  int data;
  node*left;
  node*right;
};
node *getNode(int a){
    node*p=(node*)malloc(sizeof(node));
    p->data=a;
    p->left=NULL;
    p->right=NULL;
    return p;
}
node *insert(node *root,int key){
    node*temp= root;
    node*p=getNode(key);
   while(root!=NULL)
  { 
   if(root->data==key){cout<<"Cannot be inserted ";return root;}
   else if(root->data > key)
   {
    if(root->left == NULL){count=0;break;}//we can keep track of the prev by using two pointers
    root = root -> left;                  //No need of usong count
    }
   else
   {
    if(root->right ==NULL){count=1;break;}
    root = root -> right;
    }
  }
  if(count==0){root->left=p;}
  else{root->right=p;}
  return temp;
}
void inOrder(node *root){
    if(root==NULL){return;}
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main(){
node*root=getNode(8);
node*p1=getNode(3);
node*p2=getNode(10);
node*p3=getNode(1);
node*p4=getNode(6);
node*p5=getNode(14);
node*p6=getNode(5);
node*p7=getNode(7);
node*p8=getNode(13);
root->left=p1;
root->right=p2;
p1->left=p3;
p1->right=p4;
p4->left=p6;
p4->right=p7;
p2->right=p5;
p5->left=p8;
int ke;
cout<<"Enter the number to enter ";
cin>>ke;
cout<<"Before insertion "<<endl;
inOrder(root);
cout<<endl;
root=insert(root,ke);
cout<<endl;
cout<<"After insertion "<<endl;
inOrder(root);
cout<<endl;
cout<<p2->left->data;
return 0;
}