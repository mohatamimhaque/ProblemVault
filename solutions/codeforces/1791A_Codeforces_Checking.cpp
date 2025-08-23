#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
bool present(char ch){
  bool yes=false;
  for(auto c:"codeforces"){
    if(c==ch){
      yes=true;
      break;
    }
  }
  return yes;
}
int main(){
  int a,b,c,n;
  cin>>n;
  char str,main;
  while(n--){
    cin>>str;
    if(present(str)) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
    
  }
  
  
  
  
   
    
     
      
    
   //cout<<endl;
    return 0;
    
    
    

    
    
}    