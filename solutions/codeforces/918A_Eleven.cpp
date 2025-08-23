#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0
int find(vector<int>&v,int n){
  for(auto c:v){
    if(c==n){
      return 1;
    }
  }
  return 0;
}
int main(){
   int a=1,b=1;
   vector<int>vec;
   while(a<1000){
     vec.push_back(a);
     b=a+b;
     a=b-a;
   }
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
     if(find(vec,i)){
       cout<<'O';
     }else{
       cout<<'o';
     }
   }
   cout<<endl;
    
}