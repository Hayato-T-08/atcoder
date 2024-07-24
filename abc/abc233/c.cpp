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
using ull = unsigned long long;
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
int main() {
    ll n,x;
    cin >> n >> x;
    vector<vector<ll>> a(n);
    rep(i,n){
        int l;
        cin >> l;
        rep(j,l){
            ll tmp;
            cin >> tmp;
            a[i].push_back(tmp);
        }
    }

    auto check = [&](ll x, ll a, ll b){
        return a <= x/b;
    };
    auto f = [&](auto f, int i,int j, ll r) -> int {
        if(i == n-1){
            if(check(x,r,a[i][j]) && x == r * a[i][j]) return 1;
            else return 0;
        }
        
        int res = 0;
        if(i == 0) r = a[0][j];
        else if(check(x,r,a[i][j])) r*=a[i][j];
        else return 0;

        rep(k,a[i+1].size()){
            res += f(f,i+1,k,r);
        }

        return res;
    };

    ll ans = 0;
    rep(i,a[0].size()){
        ans += f(f,0,i,0);
    }//
    cout << ans << el;
    return 0;
}