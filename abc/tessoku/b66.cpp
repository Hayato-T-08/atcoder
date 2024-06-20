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
int main() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(n);
    rep(i,m){ 
        cin >> a[i] >> b[i];
        a[i]--,b[i]--;
    }
    int q;
    cin >> q;
    vector<vector<int>> query(q);
    vector<bool> ok(m,true);
    rep(i,q){
        int t;
        cin >> t;
        if(t==1){
            query[i].push_back(t);
            int x;
            cin >> x;
            x--;
            ok[x] = false;
            query[i].push_back(x);
        }else{
            int u,v;
            cin >> u >> v;
            u--,v--;
            query[i].push_back(t);
            query[i].push_back(u);
            query[i].push_back(v);
        }
    }

    vector<bool> ans;

    dsu uf(n);
    rep(i,m){
        if(ok[i]) uf.merge(a[i],b[i]);
    }

    for(int i=q-1; i>=0;i--){
        int t = query[i][0];
        if(t == 1){
            int x = query[i][1];
            uf.merge(a[x],b[x]);
        }else{
            ans.push_back(uf.same(query[i][1],query[i][2]));
        }
    }
    reverse(all(ans));
    for(auto x : ans){
        if(x) Yes;
        else No;
    }
    return 0;
}