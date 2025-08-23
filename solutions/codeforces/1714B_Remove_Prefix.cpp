#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main() {
    int n,t,i,d;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>vec;
        set<int>st;
        for(i=0;i<n;i++){
            cin>>d;
            vec.push_back(d);
        }
        reverse(vec.begin(),vec.end());
        for(i=0;i<vec.size();i++){
            d=vec.at(i);
            if(st.count(d)) break;
            else st.insert(d);
        }
        cout<<vec.size()-st.size()<<endl;
    }
    return 0;
}
