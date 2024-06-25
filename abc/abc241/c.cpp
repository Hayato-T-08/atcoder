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
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    bool ok = false;

    rep(i,n){
        vector<int> sumw(n+1,0),sumh(n+1,0);//1-index
       
        rep1(j,n){
            sumw[j] = sumw[j-1] + (s[i][j-1] == '#');
            sumh[j] = sumh[j-1] + (s[j-1][i] == '#');
        }
        rep(j, n - 5){
            if(sumw[j+6] - sumw[j] >= 4 || sumh[j+6] - sumh[j] >= 4){
                ok = true;
            }
        }
    }


    rep(i,n){
        rep(j,n){
            if(i+5 >= n || j+5 >= n) continue;
            int cnt = 0;
            rep(k,6){
                if(s[i+k][j+k] == '#') cnt++;
            }
            if(cnt >= 4) ok = true;
        }
    }
    rep(i,n){
        rep(j,n){
            if(i+5 >= n || j-5 < 0) continue;
            int cnt = 0;
            rep(k,6){
                if(s[i+k][j-k] == '#') cnt++;
            }
            if(cnt >= 4) ok = true;
        }
    }
    if(ok) Yes;
    else No;
    return 0;
}