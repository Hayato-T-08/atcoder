#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el endl
#define Yes cout << "Yes" << el
#define No cout << "No" << el
#define YES cout << "YES" << el
#define NO cout << "NO" << el
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
const int inf = 1e9;
const int mod = 1e9 + 7;
const ll linf = 1e18;
const string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string abc = "abcdefghijklmnopqrstuvwxyz";
template <typename T>
void printVec(const std::vector<T> &array)
{
    for (const auto &elem : array)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}
template <typename T>
void print2DVec(const std::vector<std::vector<T>> &array)
{
    for (const auto &row : array)
    {
        for (const auto &elem : row)
        {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}
// 4近傍、(一般的に)上右下左
// const int dy[4] = {-1,0,1,0};
// const int dx[4] = {0,1,0,-1};
// 8方向 左上, 上, 右上, 右, 右下, 下, 左下, 左
// const int dy[8] = {-1,-1,-1,0,1,1,1,0};
// const int dx[8] = {-1,0,1,1,1,0,-1,-1};
using ull = unsigned long long;
template <typename T>
inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template <typename T>
inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }

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

int main()
{
    int n, m;
    cin >> n >> m;
    MaxFlow z;
    z.init(n);
    rep(i, m)
    {
        int a,b,c;
        cin >> a >> b >> c;
        a--,b--;
        z.add_edge(a,b,c);
    }

    cout << z.max_flow(0,n-1) << el;

    return 0;
}