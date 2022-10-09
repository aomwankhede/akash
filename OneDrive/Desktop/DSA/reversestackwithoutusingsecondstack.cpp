#include<iostream>
#include <stack>
using namespace std;
int findBottomEle(stack <int> );
void insertAtBottom(stack <int> &s1,int temp){
    if(s1.empty()){s1.push(temp);return;}
    int a= s1.top();
    s1.pop();
    insertAtBottom(s1,temp);
    s1.push(a);
}
void reverse(stack <int>* s1){
    if(s1->top()==findBottomEle(*s1)){return;}
    int temp=s1->top();
    s1->pop();
    reverse(s1);
    insertAtBottom(*s1,temp);
}
int findBottomEle(stack <int> s1){
    int a;
    while(!s1.empty()){
        a=s1.top();
        s1.pop();
    }
    return a;
}
int main(){
stack <int> s1;
s1.push(3);
s1.push(4);
s1.push(5);
s1.push(7);
s1.push(9);
reverse(&s1);
cout<<"After reersing "<<endl;
while(!s1.empty()){
    cout<<s1.top()<<endl;
    s1.pop();
}
return 0;
}