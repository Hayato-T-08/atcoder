#define _USE_MATH_DEFINES
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
// int dx[4] = {1,0,-1,0};
// int dy[4] = {0,1,0,-1};
// int dx[8] = {1,1,0,-1,-1,-1,0,1};
// int dy[8] = {0,1,1,1,0,-1,-1,-1};
using ull = unsigned long long;
void chmin(ll& a, ll b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

struct Edge
{
    int to, cost;
    Edge(int to, int cost) : to(to), cost(cost) {}
};
int main() {
    int n;
    cin >> n;
    vector<vector<Edge>> G(n);
    rep(i,n-1){
        int a,b,x;
        cin >> a >> b >> x;
        x--;
        G[i].emplace_back(i+1,a);
        G[i].emplace_back(x,b);
    }
    vector<ll> dist(n,linf);
    using P = pair<ll,int>;
    priority_queue<P, vector<P>, greater<P>> que;   
    dist[0] = 0;
    que.emplace(0,0);  
    while(!que.empty()){
        auto [d,v] = que.top();
        que.pop();
        if(dist[v] != d) continue;
        for(auto e : G[v]){
            ll nd = dist[v] + e.cost;
            if(dist[e.to] <= nd) continue;
            dist[e.to] = nd;
            que.emplace(nd,e.to);
        }
    }
    cout << dist[n-1] << endl;
    return 0;
}