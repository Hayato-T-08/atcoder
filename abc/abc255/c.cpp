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
    ll x,a,d,n;
    cin >> x >> a >> d >> n;
    x+=linf;
    a+=linf;
    if(d == 0){
        cout << abs(x-a) << el;
        return 0;
    }
    
    if(x < a){
        if(d > 0) cout << a - x << el;
        else{
            ll k = (x-a)/d;
            ll now = linf,nex = linf,pre = linf;
            now = a + k*d - x;
            if(k-1 >= 0) pre = a + (k-1)*d - x;
            if(k+1 <= n-1) nex = a + (k+1)*d - x;
            if(k <= n-1) cout << min({abs(now),abs(pre),abs(nex)}) << el;
            else cout << a + (n-1)*d - x << el;
        }
    }else{
        if(d > 0){
            ll k = (x-a)/d;
            ll pre = linf,nex = linf,now=linf;
            now = x - a - k*d;

            if(k-1 >= 0) pre = x - a - (k-1)*d;
            if(k+1 <= n) nex = x - a - (k+1)*d;
            if(k <= n-1) cout << min({abs(pre),abs(nex),abs(now)}) << el;
            else cout << x - a - (n-1)*d << el;
        }
        else cout << x - a << el;
    }
    return 0;
}