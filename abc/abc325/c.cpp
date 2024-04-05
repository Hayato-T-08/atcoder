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
int h, w;
vector<vector<char>> s;
int dx[8] = {1, 0, -1, 0, 1, -1, 1, -1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
dsu d;
void search(int x, int y)
{
    if (s[x][y] != '#')
        return;
    rep(i, 8)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx >= h || ny < 0 || ny >= w)
            continue;
        if (s[nx][ny] == '#')
            d.merge(x * w + y, nx * w + ny);
    }
}
int main()
{
    cin >> h >> w;
    s.resize(h, vector<char>(w));
    rep(i, h) rep(j, w) cin >> s[i][j];
    d = dsu(h * w);
    rep(i, h) rep(j, w) search(i, j);
    ll ans = 0;
    rep(i, h * w)
    {

        if (s[i / w][i % w] == '.' || d.leader(i) != i)
            continue;
        if (d.leader(i) == i)
            ans++;
    }
    cout << ans << endl;
}