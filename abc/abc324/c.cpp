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
int ham(string &s, string &t)
{
    if (s.size() != t.size())
        return 99;
    int res = 0;
    rep(i, s.size())
    {
        if (s[i] != t[i])
            res++;
    }
    return res;
}

bool f(string &s, string &t)
{
    if (s.size() != t.size() + 1)
        return false;
    int si = 0;
    rep(ti, t.size())
    {
        while (s[si] != t[ti] && si < s.size())
        {
            si++;
        }
        if (si == s.size())
        {
            return false;
        }
        si++;
    }
    return true;
}
int main()
{
    int n;
    string t;
    cin >> n >> t;

    bool ok = false;
    vector<int> ans;
    rep(i, n)
    {
        string s;
        cin >> s;
        bool ok = false;
        if (s.size() + 1 >= t.size())
        {
            if (s == t)
                ok = true;
            if (f(s, t))
                ok = true;
            if (f(t, s))
                ok = true;
            if (ham(s, t) <= 1)
                ok = true;
        }
        if (ok)
            ans.push_back(i + 1);
    }
    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << " ";
    return 0;
}