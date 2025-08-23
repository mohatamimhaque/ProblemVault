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
     int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;  
        vector<int> points(n);
        for (int i = 0; i < n; i++) {
            cin >> points[i];  
        }
        if(n==2 && points[0] != points[1]-1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        
        
    }
  
    
    return 0;
}
