#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

int main() {
    int t,n,data,need;
    string str,main="codeforces";
    cin>>t;
    while(t--){
      cin>>n;
      need=1;
      vector<int>vec;
      for(int i=0;i<n;i++){
        cin>>data;
        vec.push_back(data);
      }
      if(n!=1){
        sort(vec.begin(),vec.end());
        for(int i=0;i<n-1;i++){
          if(vec.at(i)>=vec.at(i+1)){
            need=0;
            break;
          }
        }
      }
      cout<<(need==1?"YES":"NO")<<endl;
      
    }
    return 0;
}