#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el endl
#define Yes cout << "Yes" << el
#define No cout << "No" << el
#define YES cout << "YES" << el
#define NO cout << "NO" << el
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
const int inf = 1e9;
const int mod = 1e9+7;
const ll linf = 1e18;
const string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string abc = "abcdefghijklmnopqrstuvwxyz";
template <typename T>
void printVec(const std::vector<T>& array) {
    for (const auto& elem : array) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}
template <typename T>
void print2DVec(const std::vector<std::vector<T>>& array) {
    for (const auto& row : array) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
         }
        std::cout << std::endl;
    }
}
// 4近傍、(一般的に)上右下左
//const int dy[4] = {-1,0,1,0};
//const int dx[4] = {0,1,0,-1};
// 8方向 左上, 上, 右上, 右, 右下, 下, 左下, 左
//const int dy[8] = {-1,-1,-1,0,1,1,1,0};
//const int dx[8] = {-1,0,1,1,1,0,-1,-1};
using ull = unsigned long long;
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
struct Edge{
    int u,v;
    ll cost;
    Edge(int u,int v,ll cost) : u(u),v(v),cost(cost){}
    
    bool operator<(const Edge& other) const {
        return cost < other.cost;
    }
};
int main() {
    int n,m;
    cin >> n >> m;
    vector<vector<pair<ll,ll>>> g(n);
    rep(i,m){
        int u,v;
        ll cost;
        cin >> u >> v >> cost;
        u--,v--;
        g[u].push_back({v,cost});
        g[v].push_back({u,cost});
    }

    vector<ll> dist(n,linf);
    vector<bool> k(n,false);
    dist[0] = 0;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> q;
    q.push({0,0});
    while(!q.empty()){
        auto [cost,u] = q.top();
        q.pop();
        if(k[u]) continue;
        k[u] = true;
        for(auto nex : g[u]){
            auto [v,nex_cost] = nex;
            if(dist[v] > dist[u] + nex_cost){
                dist[v] = dist[u] + nex_cost;
                q.push({dist[v],v});
            }
        }
    }

    rep(i,n) cout << ((dist[i] == linf) ? -1 :dist[i]) << endl;
    return 0;
}