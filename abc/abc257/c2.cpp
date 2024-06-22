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

int N;
string S;
int W[201010];
vector<pair<int, char>> WS;

int op(int a, int b) { return a + b; }
int e() { return 0; }

void _main() {
    cin >> N >> S;
    rep(i, N) cin >> W[i];
    rep(i, N) WS.push_back({ W[i], -S[i] });
    sort(all(WS));

    segtree<int, op, e> zero(vector<int>(N, 0));//0の数
    segtree<int, op, e> one(vector<int>(N, 0));//1の数
    rep(i, N) {
        if (-WS[i].second == '0') zero.set(i, 1);
        else one.set(i, 1);
    }

    int ans = -1;//境界線を全探索する
    rep(i,N + 1) chmax(ans, zero.prod(0, i) + one.prod(i, N));
    //最初は全員大人の時の正しく判定できている人数(one.prod(0, N))
    //境界線をiにするときの正しく判定できている人数(zero.prod(0, i)子供の数)
    //+正しく判定できている人数(one.prod(i, N)大人の数)
    cout << ans << endl;
}