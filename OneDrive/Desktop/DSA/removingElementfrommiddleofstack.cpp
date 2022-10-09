#include <iostream>
#include <stack>
using namespace std;
void rem (stack <int> &s1,int a){
     if(s1.top()==a)
    { 
        s1.pop();
        return;
    }
    int b;
    b=s1.top();
    s1.pop();
     rem(s1,a);
    s1.push(b);
    
}
int main(){
stack <int> s1;
s1.push(3);
s1.push(4);
s1.push(5);
s1.push(7);
s1.push(9);
rem(s1,5);
while(!s1.empty()){
    cout<<s1.top()<<endl;
    s1.pop();
}
return 0;
}