#include<iostream>
using namespace std;
struct circulrQueu{
    int *arr;
    int size=6;
    int backEnd=-1;
    int frontEnd=-1;
};
bool isFull(circulrQueu*q){
    if((q->backEnd+1) % (q->size)== q->frontEnd){return true;}
    return false;
}
bool isEmpty(circulrQueu *q){
    if(q->backEnd==q->frontEnd){return true;}
    else{return false;}
}
void enQueu(circulrQueu*q,int t){
    if(isFull(q)){cout<<"Queue is full";}
    else{
        // q->backEnd=q->backEnd+1;
        q->backEnd=(q->backEnd+1) % (q->size);
        q->arr[q->backEnd]=t;
            }
}
int deQueu(circulrQueu*q){
    if(isEmpty(q)){return 5050;}
    q->frontEnd=(q->frontEnd+1) % q->size;
    return(q->arr[q->frontEnd]);
}
int main(){
    circulrQueu q;
    q.arr=(int*)malloc(q.size*sizeof(int));//This is imp
    q.backEnd=0;//here we keep one place empty always 
    q.frontEnd=0;//the place where front points
   enQueu(&q,49);
   enQueu(&q,49);
   enQueu(&q,49);
   enQueu(&q,49);
   enQueu(&q,49);
   enQueu(&q,49);
   cout<<deQueu(&q);//thus isthe beauty of the circu;ar queu
     enQueu(&q,49);//After dequing we can add elements
//    cout<<deQueu(&q);
//    enQueu(&q,49);
return 0;
}