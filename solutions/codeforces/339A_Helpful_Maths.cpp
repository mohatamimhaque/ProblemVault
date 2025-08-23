#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    vector<int>vec;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
      if(i%2==0){
        vec.push_back(str[i]-48);
      }
    }
    sort(vec.begin(),vec.end());
    int s=vec.size()-1;
    for(int i=0;i<=s;i++){
      cout<<vec.at(i);
      if(i<s) cout<<'+';
    }
    cout<<endl;
    
    
    
    
     
    return 0;
    
    
    

    
    
}