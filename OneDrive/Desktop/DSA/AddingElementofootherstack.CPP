#include<iostream>
using namespace std;
class stack
{
	int arr[20];
	int top = -1;
	public:
	bool empty(){if(top==-1){return true;}return false;}
	int pop(){return arr[top--];}
	void push(int a){
	arr[++top]=a;}
        int peek(){return arr[top];}
};
int main(){
stack s1;
s1.push(4);
s1.push(2);
s1.push(7);
s1.push(8);
s1.push(5);
stack s2;
s2.push(6);
s2.push(5);
s2.push(34);
s2.push(99);
s2.push(54);
while(!s2.empty()){
s1.push(s2.peek());
s2.pop();}
while(!s1.empty()){cout<<s1.peek()<<endl;;s1.pop();}
return 0;}



