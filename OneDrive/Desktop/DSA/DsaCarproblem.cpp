#include<iostream>
#include<stack>
using namespace std;
int main(){
stack <int> s1;
stack <int> s2;
int t,N;
cout<<"Enter the number of cars coming ";
cin>>t;

//Taking cars inside stack
  for(int i=0;i<t;i++){
    cin>>N;
   s1.push(N);
   }
//taking the input of the required plate
  int t1;
  cout<<"Enter the number plate of the car which is moving out ";
   cin>>t1;


   while(!s1.empty() && s1.top() != t1)
   {
    s2.push(s1.top());
    s1.pop();
   }


   if(s1.empty()){cout<<"No such number plate ";}
   else{s1.pop();}


   while(!s2.empty()){
    s1.push(s2.top());
    s2.pop();
   }

   while(!s1.empty()){cout<<s1.top()<<endl;s1.pop();}

return 0;
}