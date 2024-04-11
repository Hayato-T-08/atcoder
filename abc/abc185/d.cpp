#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
const int inf = 1e9;
const int mod = 1e9+7;
const ll linf = 1e18;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> a(m);
    rep(i,m) cin >> a[i];
    sort(a.begin(),a.end());
    a.push_back(n+1);
    int cur = 1;
    vector<int> b;
    rep(i,m+1){
        int w = a[i]-cur;
        if(w != 0) b.push_back(w);
        cur = a[i]+1;
    }
    int k = n;
    for(int w:b) k = min(k,w);
    int ans = 0;
    for(int w:b) ans += (w+k-1)/k;
    cout << ans << endl;
    return 0;
}