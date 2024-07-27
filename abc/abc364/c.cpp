#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el endl
#define Yes cout << "Yes" << el
#define No cout << "No" << el
#define YES cout << "YES" << el
#define NO cout << "NO" << el
using ll = long long;
using P = pair<int, int>;
using Pll = pair<ll, ll>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
const int inf = 1073741823;
const int mod = 1e9 + 7;
const ll linf = 1LL << 60;
const string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string abc = "abcdefghijklmnopqrstuvwxyz";
template <typename T1, typename T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p)
{
    os << '(' << p.first << ", " << p.second << ')';
    return os;
}
template <typename T>
void pV(const std::vector<T> &array)
{
    for (const auto &elem : array)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}
template <typename T>
void p2V(const std::vector<std::vector<T>> &array)
{
    for (const auto &row : array)
    {
        for (const auto &elem : row)
        {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}
// 4近傍、(一般的に)上右下左
// const int dy[4] = {-1,0,1,0};
// const int dx[4] = {0,1,0,-1};
// 8方向 左上, 上, 右上, 右, 右下, 下, 左下, 左
// const int dy[8] = {-1,-1,-1,0,1,1,1,0};
// const int dx[8] = {-1,0,1,1,1,0,-1,-1};
using ull = unsigned long long;
template <typename T>
inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template <typename T>
inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
int main()
{
    int n;
    ll x,y;
    cin >> n >> x >> y;
    vector<ll> a(n),b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];

    vector<Pll> ab1(n),ab2(n);
    rep(i,n){
        ab1[i] = {a[i],b[i]};
        ab2[i] = {b[i],a[i]};
    }
    sort(all(ab1),greater<Pll>());
    sort(all(ab2),greater<Pll>());
    ll sum = 0;
    int ans1=0,ans2=0;
    rep(i,n){
        sum += ab1[i].first;
        ans1++;
        if(sum > x) break;
    }
    sum = 0;
    rep(i,n){
        sum += ab2[i].first;
        ans2++;
        if(sum > y) break;
    }
    cout << min(ans1,ans2) << el;
    return 0;
}