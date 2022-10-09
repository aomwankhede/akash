//Descending Order:
// #include<iostream>
// #include <stack>
// using namespace std;
// stack<int> sort(stack <int> & s1){
//     stack <int> s2;
//     while(!s1.empty()){
//         if(s2.empty()){s2.push(s1.top());s1.pop();}
//         else{
//             int temp=s1.top();
//             s1.pop();
//             if(s2.top()>temp){
//                 while(!s2.empty()&&s2.top()>temp){
//                     s1.push(s2.top());
//                     s2.pop();
//                 }
//                 s2.push(temp);
//             }
//             else{s2.push(temp);}
//         }
//     }
//     return s2;
// }
// int main(){
// stack <int> s1;
// s1.push(4);
// s1.push(7);
// s1.push(3);
// s1.push(9);
// s1.push(5000);
// stack <int> s2=sort(s1);
// while(!s2.empty()){
//     cout<<s2.top()<<endl;
//     s2.pop();
// }
// return 0;
// }
// Ascending Order:
#include<iostream>
#include <stack>
using namespace std;
stack<int> sort(stack <int> & s1){
    stack <int> s2;
    while(!s1.empty()){
        if(s2.empty()){s2.push(s1.top());s1.pop();}
        else{
            int temp=s1.top();
            s1.pop();
            if(s2.top()<temp){
                while(!s2.empty()&&s2.top()<temp){
                    s1.push(s2.top());
                    s2.pop();
                }
                s2.push(temp);
            }
            else{s2.push(temp);}
        }
    }
    return s2;
}
int main(){
stack <int> s1;
s1.push(4);
s1.push(7);
s1.push(3);
s1.push(9);
s1.push(5000);
stack <int> s2=sort(s1);
while(!s2.empty()){
    cout<<s2.top()<<endl;
    s2.pop();
}
return 0;
}