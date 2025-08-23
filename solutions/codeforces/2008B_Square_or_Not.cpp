#include<bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
double mysqrt(double x) {
    if (x < 0) {
        return -1; 
    }

    double guess = x / 2.0;
    double t = 1e-7;  // Tolerance
    while (fabs(guess * guess - x) > t) {
        guess = (guess + x / guess) / 2.0;
    }
    return guess;
}
int main() {
    //init_code();
    int t,s,r,i,s0,s1;
    string str;
    cin>>t;
    while(t--){
        cin>>s>>str;
        r = mysqrt(s);
        s0=s1=0;
        if(r*r == s){
            for(auto ch:str){
                if(ch=='0'){
                    s0++;
                }else{
                    s1++;
                }

            }
            if(s0==(r-2)*(r-2)){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    
  
    
    return 0;
}
