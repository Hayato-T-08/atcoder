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
Graph G;
vector<bool> seen;
vector<int> ans;
int main()
{
    int n;
    cin >> n;
    dsu d(n);
    rep(i, n - 1)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        if (a == 0)
            continue;
        d.merge(a, b);
    }
    G = d.groups();
    int max = 0;
    rep(i, G.size())
    {
        if (G[i].size() > max)
            max = G[i].size();
    }
    cout << n - max << endl;
    return 0;
}