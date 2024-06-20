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
int n;

struct Edge {
    int u,v;
    ll cost;
    Edge() : u(0),v(0),cost(0){}
    Edge(int u,int v,ll cost) : u(u),v(v),cost(cost){}
    bool operator<(Edge &other){
        return cost < other.cost;
    }
};

class SegmentTree{
    public:
    vector<int> dat;
    int siz = 1;
    void init(int n){
        siz = 1;
        while(siz < n) siz*=2;
        dat.resize(siz*2+1,0);
    }
    void update(int pos, int x){
        pos = pos + siz - 1;
        dat[pos] = x;
        while(pos >= 2){
            pos/=2;
            dat[pos] = max(dat[pos*2], dat[pos*2+1]);
        }
    }

    int query(int l, int r, int a, int b ,int u){
        if( r <= a || b <= l) return -inf;
        if( l <= a && b <= r) return dat[u];
        int m = (a + b)/2;
        int al = query(l,r,a,m,u*2);
        int ar = query(l,r,m,b,u*2+1);
        return max(al,ar);
    }
};

vector<bool> vi(n,false);
auto dfs = [&](auto dfs,int v) -> void {
    vi[v] = true;
    for(auto nx : g[v]){
        if(vi[nx]) continue;
        dfs(dfs,nx);
    }
};

class UnionFind {
    public:
    vector<int> parent,size;//parentが親で根が-1,sizeはグループのサイズ

    void init(int n){
        parent.resize(n);
        size.resize(n);
        rep(i,n){
            parent[i] = -1;
            size[i] = 1;
        }
    }

    bool same(int u, int v){
        return root(u) == root(v);
    }

    int root(int x){//根を返す関数
        while(true){
            if(parent[x] == -1) break;//根にたどり着いたら終了
            x = parent[x];
        }
        return x;
    }
    void merge(int u,int v){
        int ru = root(u), rv = root(v);
        if(ru == rv) return;//同じグループだったら終了
        if(size[ru] < size[rv]){//サイズがrvのほうが大きかったら
            parent[ru] = rv;//rvをruの親に
            size[rv] = size[rv] + size[ru];//統合  
        }else{
            parent[rv] = ru;
            size[ru] = size[rv] + size[ru];
        }
    }
};

// bfs
// vector<int> dis(n,-1);
// queue<int> q;

// q.push(0);
// dis[0] = 0;
// while(!q.empty()){
//     int now = q.front();
//     q.pop();
//     for(auto nex : g[now]){
//         if(dis[nex] != -1) continue;
//         dis[nex] = dis[now] + 1;
//         q.push(nex);
//     }
// }

//ダイクストラ法
// vector<ll> dist(n,linf);
// vector<bool> k(n,false);
// dist[0] = 0;
// priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> q;
// q.push({0,0});
// while(!q.empty()){
//     auto [cost,u] = q.top();
//     q.pop();
//     if(k[u]) continue;
//     k[u] = true;
//     for(auto nex : g[u]){
//         auto [v,nex_cost] = nex;
//         if(dist[v] > dist[u] + nex_cost){
//             dist[v] = dist[u] + nex_cost;
//             q.push({dist[v],v});
//         }
//     }
// }

// rep(i,n) cout << ((dist[i] == linf) ? -1 :dist[i]) << endl;

//maxflow
struct Edge
{
    int to, cap, rev; // 行先、容量、逆辺の場所(j)
};

class MaxFlow
{
public:
    int size_ = 0;
    vector<bool> used;
    vector<vector<Edge>> G;

    void init(int n)
    {
        size_ = n;
        G.resize(n);
    }

    void add_edge(int a, int b, int c)
    {
        int cur_Ga = G[a].size(); // 現時点でのG[a]のサイズ
        int cur_Gb = G[b].size(); // 現時点でのG[b]のサイズ
        G[a].push_back(Edge{b, c, cur_Gb});
        G[b].push_back(Edge{a, 0, cur_Ga});
    }

    int dfs(int pos, int goal, int F)
    {
        if (pos == goal)
            return F;
        used[pos] = true;

        for (auto &nex : G[pos])
        {
            if (nex.cap == 0)
                continue; // 容量0の辺は使えない
            if (used[nex.to])
                continue; // すでに訪問した頂点は無視

            int flow = dfs(nex.to, goal, min(F, nex.cap)); // 目的地までのパスを探す。パス上の最小の容量がフロー

            // フローが見つかり流せる場合残余グラフを更新
            if (flow >= 1)
            {
                nex.cap -= flow;
                G[nex.to][nex.rev].cap += flow; // 逆辺を増加
                return flow;
            }
        }

        return 0;
        // 何も見つからなかった場合
    }

    int max_flow(int s, int t)
    {
        int total_flow = 0;
        while (true)
        {
            used.assign(size_, false);
            int F = dfs(s, t, inf);

            if (F == 0)
                break;
            total_flow += F;
        }
        return total_flow;
    }
};