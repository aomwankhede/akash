#include<iostream>
using namespace std;
class Stack
{
	int arr[5];
	int top = -1;
	public:
	bool empty(){if(top==-1){return true;}return false;}
	int pop(){return arr[top--];}
	void push(int a){
	arr[++top]=a;}
        int peek(){return arr[top];}
    int find(int a){
        int counter=1;
       while(!empty()){
        if(arr[top]==a){break;}
        else{ pop();counter++;}
       }
       return counter;
    }
};
int main(){
Stack s1;
s1.push(4);
s1.push(2);
s1.push(7);
s1.push(8);
s1.push(5);
int a;
cout<<"Enter the elemnment to be find ";
cin>>a;
cout<<"The element is at "<<s1.find(a)<<" from top ";
return 0;}