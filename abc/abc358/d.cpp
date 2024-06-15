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

// 4近傍、(一般的に)上右下左
const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};
// 8方向 左上, 上, 右上, 右, 右下, 下, 左下, 左

using ull = unsigned long long;
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
int main() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m);

    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];
    map<int,int> mp;
    rep(i,n) mp[a[i]]++;
    a.erase(unique(all(a)),a.end());
    sort(all(a));
    sort(all(b));
    ll ans = 0;
    int cur = 0;
    bool ok = true;
    for(int i = 0; i < (int)b.size(); i++){
        while(b[i] > a[cur] or mp[a[cur]] == 0){
            cur++;
            if(cur == (int)a.size()){
                ok = false;
                break;
            }
        }
        if(!ok) break;
        ans += a[cur];
        mp[a[cur]]--;
    }

    if(!ok) cout << -1 << el;
    else cout << ans << el;
    return 0;
}