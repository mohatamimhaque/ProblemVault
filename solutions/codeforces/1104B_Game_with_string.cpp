#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
string solve() {
    string str;
    cin>>str;
     stack<char> charStack;
    int pairsRemoved = 0;

    for (char c : str) {
        if (!charStack.empty() && charStack.top() == c) {
            charStack.pop(); 
            pairsRemoved++;   
        } else {
            charStack.push(c);
        }
    }
    if (pairsRemoved&1) {
        return  "YES";
    } 
    return "NO";

}


int main() {
// init_code();
   int t=1;
   //cin>>t;
   while(t--){
        cout<<solve()<<endl;
   }
    
    
    return 0;
}
