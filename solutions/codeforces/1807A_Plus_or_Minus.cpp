#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
vector<int>vec;
int index(int target,int p){
  auto it = find(vec.begin()+p, vec.end(), target);
  return distance(vec.begin(),it);
}
int main(){
  int a,b,c,n;
  cin>>n;
  while(n--){
    cin>>a>>b>>c;
    char s=a+b==c?'+':'-';
    cout<<s<<endl;
  }
  
  
  
  
   
    
     
      
    
   //cout<<endl;
    return 0;
    
    
    

    
    
}    