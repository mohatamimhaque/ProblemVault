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
int getMaxScore(vector<int>& arr) {
    int n = arr.size();
    
    int score1 = 0, score2 = 0;
    int maxElem1 = 0, maxElem2 = 0;
    int count1 = 0, count2 = 0;

    for (int i = 0; i < n; i += 2) {
        maxElem1 = max(maxElem1, arr[i]);
        count1++;
    }
    score1 = maxElem1 + count1;

    for (int i = 1; i < n; i += 2) {
        maxElem2 = max(maxElem2, arr[i]);
        count2++;
    }
    score2 = maxElem2 + count2;

    return max(score1, score2);
}

int main() {
   // init_code();
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];  
        }

        cout << getMaxScore(arr) << endl;
    }

    return 0;
}