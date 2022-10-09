#include<iostream>
using namespace std;
struct queue{
    int *arr;
    int size=10;
    int backEnd=-1;
    int frontEnd=-1;
};
bool isFull(queue*q){
    if(q->backEnd==q->size-1){return true;}
    return false;
}
bool isEmpty(queue *q){
    if(q->backEnd==q->frontEnd){return true;}
    else{return false;}
}
void enQueue(queue*q,int t){
    if(isFull(q)){cout<<"5050";}
    else{
        q->backEnd=q->backEnd+1;
        q->arr[q->backEnd]=t;
            }
}
int deQueue(queue*q){
    if(isEmpty(q)){return 50505;}
    q->frontEnd=q->frontEnd+1;
    return(q->arr[q->frontEnd]);
}
int main(){
    queue q;
    q.arr=(int*)malloc(q.size*sizeof(int));//This is imp
    // cout<<isFull(&q)<<endl;
    // cout<<isEmpty(&q)<<endl;
    // cout<<deQueue(&q)<<endl;
    enQueue(&q,45);
    enQueue(&q,5);
    enQueue(&q,21);
    enQueue(&q,42);
    enQueue(&q,4);
     enQueue(&q,45);
    enQueue(&q,5);
       enQueue(&q,21);
    enQueue(&q,42);
    enQueue(&q,4);
    enQueue(&q,4);
    // deQueue(&q);//This is the problem of the linear queu,even after 
                //    deQueuing we are not able to enque more elements
    // enQueue(&q,5);
    //  enQueue(&q,45);
    // enQueue(&q,5);
    // deQueue(&q);
    // deQueue(&q);
    // deQueue(&q);
    // deQueue(&q);
    // deQueue(&q);
    // cout<<isFull(&q)<<endl;
    //  cout<<isEmpty(&q)<<endl;
return 0;
}