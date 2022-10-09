#include<iostream>
using namespace std;
class stack{
    int top=-1;
    int arr[50];
    public:
    bool empty(){
        if(top==-1){return true;}
        return false;
        }
    bool full(){
        if(top==49)
        {
            return true;
        }
        return false;
    }
    void push(int a){
        arr[++top]=a;}
    void pop(){
        top--;
    }
    int tops(){
        return arr[top];
    }
};
int main(){
   stack s1;
   s1.push(1);
   s1.push(10);
   s1.push(2);
   s1.push(3);
   s1.push(4);
   stack s2;
   s2.push(11);
   s2.push(10);
   s2.push(23);
   s2.push(31);
   s2.push(41);
   stack s3;
   while(!s1.empty()){s3.push(s1.tops());s1.pop();}
   while(!s2.empty()){s3.push(s2.tops());s2.pop();}
   while(!s3.empty()){
   cout<<s3.tops()<<endl;
   s3.pop();
   }
}