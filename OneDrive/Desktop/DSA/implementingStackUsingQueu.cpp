//NOVICE:
#include <iostream>
using namespace std;
class queue {
      int rear=-1;
      int front=-1;
      int arr[10];
      public:
      bool empty(){
            if(rear==-1&&front==-1 || front>rear){return true;}
            return false;
      }
      bool full(){
            if(rear==9){return true;}
            return false;
      }
      int deque(){
            return arr[front++];
      }
      void enque(int a){
          if(rear==-1){front++;}
          arr[++rear]=a;
      }
};
class stack{
      queue q1;
      queue q2;
      int top=-1;
      public:
      bool empty()
      {
        if(q1.empty()){
              return true;
        }
        else{
              return false;
        }
      }
      bool Full(){
            if(q1.full()){return true;}
            return false;
      }
      void push(int a)
      {
            if(q1.full())
            {
                  cout<<"Stack Overflow"<<endl;
                  
            }
            else{
            while(!q1.empty())
            {
                  q2.enque(q1.deque());
            }
            q1.enque(a);
            while(!q2.empty())
            {
             q1.enque(q2.deque());    
            }
            }
      }
      int pop()
      {
            if(!q1.empty())
            {
            return q1.deque();
            }
            else
            {
            cout<<"Stack Underflow"<<endl;return 50050;
            }
      }
};
int main()
{  
      stack s1;
      s1.push(100);
      s1.push(20);
      s1.push(10);
      s1.push(50);
      s1.push(23);
      s1.push(234);
      s1.push(100);
      s1.push(20);
      s1.push(10);
      s1.push(50);
      s1.push(23);
      // while(!s1.empty()){
      //       cout<<s1.pop()<<endl;
      // }
      // cout<<s1.pop()<<endl;
    return 0;
}

