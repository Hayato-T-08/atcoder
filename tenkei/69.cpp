#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
const int inf = 1e9;
const int mod = 1e9 + 7;
const ll linf = 1e18;

int main()
{
    ll n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout << (n == 1 ? 1 : 0) << endl;
    }
    else if (n == 1)
    {
        cout << k % mod << endl;
    }
    else if (n == 2)
    {
        cout << k * (k - 1) % mod << endl;
    }
    else
    {
        ll ans = ((k * (k - 1)) % mod) * pow_mod(k - 2, n - 2, mod);
        ans %= mod;
        if (ans < 0)
            ans += mod;
        cout << ans << endl;
    }

    return 0;
}