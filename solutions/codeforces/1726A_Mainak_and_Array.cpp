#include<bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

void solve() {
    int N;
  cin >> N;

  int A[N];
  int ans = -1000000007;

  for(int i = 0; i < N; ++i){
    cin >> A[i];
  }

  for(int i = 0; i < N; ++i){
    ans = max(ans, A[(i - 1 + N) % N] - A[i]);
  }

  for(int i = 1; i < N; ++i){
    ans = max(ans, A[i] - A[0]);
  }

  for(int i = 0; i < N - 1; ++i){
    ans = max(ans, A[N - 1] - A[i]);
  }

  cout << ans << '\n';
  
}
int main(){
  init_code();
  int t=1;
  cin>>t;
  while(t--){
    solve();
  }
}

