#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
const int inf = 1e9;
const int mod = 1e9+7;
const ll linf = 1e18;

int main() {
    int n,m;
    cin >> n >> m;
    vector<vector<P>> G(n+1);
    rep1(i,m){
        int a,b,c;
        cin >> a >> b >> c;
        G[a].push_back({b,c});
        G[b].push_back({a,c});
    }
    priority_queue<P, vector<P>, greater<P>> que;
    vector<bool> used(n+1, false);
    vector<int> dist(n+1, inf);
    dist[1] = 0;
    que.push({dist[1], 1});

    while(!que.empty()){
        int pos = que.top().second;
        que.pop();
        if(used[pos]) continue;
        used[pos] = true;
        for(auto next : G[pos]){
            int to = next.first;
            int cost = next.second;
            if(dist[to] > dist[pos] + cost){
                dist[to] = dist[pos] + cost;
                que.push({dist[to], to});
            }
        }
    }

    rep1(i,n){
        if(dist[i] == inf) cout << "-1" << endl;
        else cout << dist[i] << endl;
    }
    return 0;
}