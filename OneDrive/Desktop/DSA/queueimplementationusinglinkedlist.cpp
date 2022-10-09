#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *f=NULL;
node *r=NULL;
void enque(int temp)
{
    node *n =(node*)malloc(sizeof(node));
    n->data=temp;
    if(n==NULL){cout<<"Overflow"<<endl;}
    else{
        n->next=NULL;
        if(f==NULL){
            f=r=n ;//common sense
        }
        else{
            r->next=n;
            r=n;
        }
    }
}
void dispList(node*head){
    node*p=head;
    while(p!=NULL){
        cout<<p->data<<" ";
         p=p->next;
    }
}
int deque(){
    node*p=f;
    f=f->next;
    int t=p->data;
    free(p);
    return t;
}
int main()
{
    //  dispList(f);
   enque(10);   
   enque(1014);   
   enque(101);   
   enque(100); 
    dispList(f);
    cout<<endl;  
    cout<<deque()<<" "<<deque()<<endl;
    dispList(f); 
    return 0;
}