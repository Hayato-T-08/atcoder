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
vector<int> dist;
Graph G;
queue<int> que;
void bfs(int pos){
    que.push(pos);
    dist[pos] = 0;
    while(!que.empty()){
        int cur = que.front();
        que.pop();
        for(auto next : G[cur]){
            if(dist[next] != -1) continue;
            dist[next] = dist[cur] + 1;
            que.push(next);
        }
    }
}
int main() {
    int n,t;
    cin>>n>>t;
    G.resize(n+1);
    dist.assign(n+1, -1);
    vector<P> List;
    rep1(i,n-1){
        int a,b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    bfs(t);


    rep1(i,n){
        List.push_back({dist[i], i});
    }
    sort(List.begin(), List.end());
    reverse(List.begin(), List.end());
    vector<int> dp(n+1,0);
    for(int i=0;i<List.size();i++){
        int pos = List[i].second;
        for(auto next : G[pos]){
            if(dist[pos] < dist[next]) dp[pos] = max(dp[pos], dp[next]+1);
        }
    }

    rep1(i,n){
        cout << dp[i] << " ";
    }
    return 0;
}