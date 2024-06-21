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
    int n,w,L,R;
    cin >> n >> w >> L >> R;
    vector<ll> x;
    x.push_back(0);//0がスタート
    rep(i,n){
        int k;
        cin >> k;
        x.push_back(k);
    }
    x.push_back(w);//n+1がゴール
    vector<mint> dp(n+2,0),sum(n+2,0);
    dp[0] = 1;
    sum[0] = dp[0];
    
    rep1(i,n+1){
        int l = lower_bound(all(x), x[i] - R) - x.begin();
        int r = upper_bound(all(x), x[i] - L) - x.begin();
        // cout << l << " " << r <<el;
        r--;
        if(r == -1) dp[i]=0;
        else dp[i] = sum[r];
        if(l - 1 >= 0) dp[i] -= sum[l-1];
        
        sum[i] = sum[i-1] + dp[i];
        // rep3(j,l,r) dp[j] += dp[i];

    }

    // rep(i,n+2) cout << dp[i].val() << " ";
    // cout << el;
    // rep(i,n+2) cout << sum[i].val() << " ";
    // cout << el;
    cout << dp[n+1].val() << endl;
    return 0;
}