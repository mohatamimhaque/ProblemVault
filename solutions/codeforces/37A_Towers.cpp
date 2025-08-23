#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
typedef long long ll;
using namespace std;

void init_code() {
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}


int main(){
   //init_code();
     int N;
    cin >> N;

    map<int, int> bar;
    int length;
    
    for (int i = 0; i < N; i++) {
        cin >> length;
        bar[length]++;
    }

    int maxHeight = 0;
    int numTowers = bar.size();
    
    for (auto& entry : bar) {
        maxHeight = max(maxHeight, entry.second);
    }

    cout << maxHeight << " " << numTowers << endl;

    return 0;
    return 0;
}
