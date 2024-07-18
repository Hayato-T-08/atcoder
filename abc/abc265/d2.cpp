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
using Pll = pair<ll,ll>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
const int inf = 1073741823;
const int mod = 1e9+7;
const ll linf = 1LL << 60;
const string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string abc = "abcdefghijklmnopqrstuvwxyz";
template<typename T1, typename T2>
ostream& operator<<(ostream& os, const pair<T1, T2>& p) {
    os << '(' << p.first << ", " << p.second << ')';
    return os;
}
template <typename T>
void pV(const std::vector<T>& array) {
    for (const auto& elem : array) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}
template <typename T>
void p2V(const std::vector<std::vector<T>>& array) {
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
ll op(ll a, ll b) {
    return a+b;
}
ll e() {
    return 0;
}
using ull = unsigned long long;
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }

int main() {
    ll n,p,q,r;
    cin >> n >> p >> q >> r;
    vector<ll> a(n),sum(n+1);
    rep(i,n) cin >> a[i];
    rep1(i,n) sum[i] = sum[i-1] + a[i-1];
    //sum[i+1] が i 番目までの和よって区間[x,y)の総和は sum[y] - sum[x]
    //
    rep(x,n){
        int y = lower_bound(all(sum), sum[x]+p) - sum.begin();
        if(y == n+1) continue;
        if(sum[y] - sum[x] != p) continue;
        int z = lower_bound(all(sum), sum[y]+q) - sum.begin();
        if(z == n+1) continue;
        if(sum[z] - sum[y] != q) continue;
        int w = lower_bound(all(sum), sum[z]+r) - sum.begin();
        if(w == n+1) continue;
        if(sum[w] - sum[z] != r) continue;
        Yes;
        return 0;
    }
    No;
    return 0;
}