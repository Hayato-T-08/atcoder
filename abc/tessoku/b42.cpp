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
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
const int inf = 1e9;
const int mod = 1e9 + 7;
const ll linf = 1e18;
// int dx[4] = {1,0,-1,0};
// int dy[4] = {0,1,0,-1};
// int dx[8] = {1,1,0,-1,-1,-1,0,1};
// int dy[8] = {0,1,1,1,0,-1,-1,-1};
using ull = unsigned long long;
template <typename T>
inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template <typename T>
inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
int main()
{
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];

    auto m = [&](ll a, ll b) -> ll
    {
        return abs(a) + abs(b);
    };

    auto f = [&]() -> ll
    {
        ll l1 = 0, r1 = 0, l2 = 0, r2 = 0, l3 = 0, r3 = 0, l4 = 0, r4 = 0;
        rep(i, n)
        {
            if (a[i] + b[i] > 0)
                l1 += a[i], r1 += b[i];
            if (a[i] - b[i] > 0)
                l2 += a[i], r2 += b[i];
            if (-a[i] + b[i] > 0)
                l3 += a[i], r3 += b[i];
            if (-a[i] - b[i] > 0)
                l4 += a[i], r4 += b[i];
        }
        ll v1 = m(l1, r1), v2 = m(l2, r2), v3 = m(l3, r3), v4 = m(l4, r4);
        return max({v1, v2, v3, v4});
    };

    cout << f() << endl;
    return 0;
}