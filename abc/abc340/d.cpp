#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
using ll = long long;
using P = pair<ll,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
const int inf = 1e9;
const int mod = 1e9+7;
const ll linf = 1e18;
struct Edge{
    int to, cost;
    Edge(){}
    Edge(int to, ll cost): to(to), cost(cost){}
};
int main() {
    int n;
    cin >> n;
    vector<vector<Edge>> g(n);
    rep(i,n-1){
        int a,b,x;
        cin >> a >> b >> x;
        x--;
        g[i].emplace_back(i+1,a);
        g[i].emplace_back(x,b);
    }
    vector<ll> dist(n,linf);
    priority_queue<P, vector<P>, greater<P>> q;
    dist[0] = 0;
    q.push(P(0,0));
    while(!q.empty()){
        auto [d,v] = q.top();
        q.pop();
        if(dist[v] != d) continue;
        for(auto e : g[v]){
            if(dist[e.to] > dist[v] + e.cost){
                dist[e.to] = dist[v] + e.cost;
                q.push(P(dist[e.to],e.to));
            }
        }
    }

    cout << dist[n-1] << endl;
    return 0;
}