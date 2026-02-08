#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(int t) {
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int,int>>> adjs(n+1);
    int u, v, w;

    for(int i = 0; i < m; i++){
        cin >> u >> v >> w;
        adjs[u].push_back({v, w});
        adjs[v].push_back({u, w}); // undirected
    }

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> dist(n+1, 1e18); // fix here
    vector<int> parent(n+1, -1);

    dist[1] = 0;
    parent[1] = 0;
    pq.push({0, 1});

    while(!pq.empty()){
        auto [du, u] = pq.top(); pq.pop();
        if(dist[u] != du) continue;

        for(auto [v, weight] : adjs[u]){
            if(dist[u] + weight < dist[v]){
                dist[v] = dist[u] + weight;
                parent[v] = u;
                pq.push({dist[v], v});
            }
        }
    }

    if(dist[n] == 1e18){
        cout << -1 << '\n';
        return;
    }

    vector<int> path;
    int curr = n;
    while(curr != 0){
        path.push_back(curr);
        curr = parent[curr];
    }

    reverse(path.begin(), path.end());

    for(int i = 0; i < path.size(); i++){
        cout << path[i] << (i == path.size() - 1 ? '\n' : ' ');
    }
}

int32_t main(){
    int t = 1;
    // cin >> t;
    while(t--) solve(t);
    return 0;
}
