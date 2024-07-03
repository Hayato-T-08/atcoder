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
using ull = unsigned long long;
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
int main() {
    int n;
    cin >> n;
    vector<string> s(n), t(n); 
    rep(i,n) cin >> s[i];
    rep(i,n) cin >> t[i];
    auto rotate = [&](vector<string> &s) {
        int n = s.size();
        vector<string> res(n, string(n, '.'));
        rep(i,n) rep(j,n) {
            res[j][n-1-i] = s[i][j];
        }
        return res;
    };


    auto find_top_left = [&](vector<string> &s) {
        int n = s.size();
        int top = n, left = n;
        rep(i,n) rep(j,n) {
            if(s[i][j] == '#') {
                chmin(top, i);
                chmin(left, j);
            }
        }
        return P(top, left);
    };
    auto check = [&](vector<string> &s, vector<string> &t) {
        P top_left_s = find_top_left(s);
        P top_left_t = find_top_left(t);
        int dy = top_left_t.first - top_left_s.first;
        int dx = top_left_t.second - top_left_s.second;
        int n = s.size();
        rep(i,n) rep(j,n) {
            int ni = i + dy;
            int nj = j + dx;
            if(ni < 0 || nj < 0 || ni >= n || nj >= n) {
                if(s[i][j] == '#') return false;
            } else {
                if(s[i][j] != t[ni][nj]) return false;
            }
        }
        return true;
    };
    vector<string> tmp = t;
    int cnt_s = 0, cnt_t = 0;
    rep(i,n) rep(j,n) {
        if(s[i][j] == '#') cnt_s++;
        if(t[i][j] == '#') cnt_t++;
    }
    if(cnt_s != cnt_t) {
        No;
        return 0;
    }
    rep(i,4){
        if(s == tmp) {
            Yes;
            return 0;
        }

        if(check(s, tmp)) {
            Yes;
            return 0;
        }
        tmp = rotate(tmp);
    }
    No;
    return 0;
}