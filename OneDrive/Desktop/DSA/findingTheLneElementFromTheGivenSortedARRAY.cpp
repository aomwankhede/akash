#include <iostream>
#include <stack>
using namespace std;
int Alone(int arr[],int n){
     stack <int> s1;
     for(int i=0;i<n;i++){
        if(s1.empty()){
              s1.push(arr[i]);
        }
        else{
              if(s1.top()==arr[i]){s1.pop();}
        }
     }
     return s1.top();
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){cin>>arr[i];}
  cout<<Alone(arr,n);
    return 0;
}
