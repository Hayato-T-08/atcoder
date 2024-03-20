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
const ll e = 1e4;
int main() {
    int n,m;
    cin >> n >> m;
    vector<vector<pair<ll,ll>>> G(n+1);
    rep1(i,m){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(d == 1){
            G[a].push_back({b,c*e - 1});
            G[b].push_back({a,c*e - 1});
        }else{
            G[a].push_back({b,c * e});
            G[b].push_back({a,c * e});
        }
    }
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> que;
    vector<bool> used(n+1,false);
    vector<ll> dist(n+1,linf);
    dist[1] = 0;
    que.push({dist[1],1});

    while(!que.empty()){
        ll pos = que.top().second;
        que.pop();
        if(used[pos]) continue;
        used[pos] = true;
        for(auto next:G[pos]){
            ll to = next.first;
            ll cost = next.second;
            if(dist[to] > dist[pos] + cost){
                dist[to] = dist[pos] + cost;
                que.push({dist[to],to});
            }
        }
    }

    ll distance = (dist[n] + e - 1) / e;
    ll numtree = distance*e - dist[n];
    cout << distance << " " << numtree << endl;
    return 0;
}