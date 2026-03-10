#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;cin >> t;

    const int INF = 1e9;

    while (t--) {
        int n;cin>> n;

        vector<int>vc(n);
        for(auto &v : vc){
            cin >> v;
        }

        vector<int> dp(7,INF), ndp(7,INF);

        for (int v= 1;v <= 6; v++) {
            dp[v] = (vc[0]== v ? 0 : 1);
        }

        for (int i = 1; i< n; i++) {
            fill(ndp.begin(), ndp.end(),INF);

            for (int u = 1; u <= 6; u++) {
                for (int v = 1; v <= 6; v++) {
                    if (v == u|| v == 7 -u) continue;
                    ndp[v] = min(ndp[v],dp[u]+ (vc[i] == v? 0 : 1));
                }
            }
            dp = ndp;
        }

        cout << *min_element(dp.begin() + 1,dp.end()) << "\n";
    }
}
