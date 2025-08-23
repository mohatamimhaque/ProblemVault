#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define lli long long int
#define ll long long
#define nl '\n'
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

void solve() {
       int n, r,d; 
        cin >> n >> r;
        int total_seat = 2*r;
        int happy_people = 0;
        int non_happy_people = 0;
        vector<int>vec;
        for (int i = 0; i < n; i++) {
            cin >> d;
            vec.push_back(d);
        }
        for (int i = 0; i < n && total_seat > 0; i++) {
            d = vec[i];
            while(total_seat>0&&d>1){
                total_seat-=2;
                happy_people+=2;
                d-=2;
            }
            if(d==1){
                vec[i] = 1;
                non_happy_people++;
           }else{
                vec[i] = 0;
            }
        }
        for(int i = 0; i < n && total_seat > 0 && total_seat > non_happy_people; i++){
            d = vec[i];
            if(d==1){
                total_seat-=2;
                happy_people+=1;
                non_happy_people--;
            }
        }
              // cout<<total_seat<<' '<<non_happy_people<<endl;

        cout<<happy_people<<endl;
        
        
        
        return ;


}

int main() {
    init_code();
    
    int t = 1;
    cin >> t;

    while (t--) {
       solve();
    }

    return 0;
}
