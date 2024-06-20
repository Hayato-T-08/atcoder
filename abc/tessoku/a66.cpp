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


int main(){
    UnionFind dsu;
    int n,q;
    cin >> n >> q;
    dsu.init(n);
    rep(i,q){
        int t;
        cin >> t;
        if(t==1){
            int u,v;
            cin >> u >> v;
            u--,v--;
            dsu.merge(u,v);
        }else{
            int u,v;
            cin >> u >> v;
            u--,v--;
            if(dsu.same(u,v)) Yes;
            else No;
        }
    }
    return 0;
}