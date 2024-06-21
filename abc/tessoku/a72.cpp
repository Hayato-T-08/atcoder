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
    int h,w,k;
    cin >> h >> w >> k;
    vector<string> c(h);
    rep(i,h) cin >> c[i];
    int ans = 0;
    vector<int> yoko(w);
    rep(i,h){
        rep(j,w){
            if(c[i][j] == '.') yoko[j]++;
        }
    }
    rep(i,(1<<h)){
        int cnt = k;
        vector<string> tmp = c;
        vector<int> yoko2 = yoko,idx(w);
        iota(all(idx),0);
        auto f = [&](int i, int j){
            return yoko2[i] > yoko2[j];
        };
        rep(j,h){
            if((1<<j) & i){
                rep(k,w){
                    if(c[j][k] == '.') yoko2[k]--;
                    tmp[j][k] = '#';
                    
                }
                cnt--;
            }
        }
        sort(all(idx),f);
        rep(j,cnt){
            rep(i,h) tmp[i][idx[j]] = '#';
        }
        int count = 0;
        rep(i,h)rep(j,w) if(tmp[i][j] == '#') count++;
        if(cnt >= 0) chmax(ans,count);
    }
    cout << ans << endl;
    return 0;
}