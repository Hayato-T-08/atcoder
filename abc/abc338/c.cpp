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
    int n;
    cin >> n;
    vector<int> q(n),a(n),b(n);
    rep(i,n) cin >> q[i];
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    int ans = 0;
    for(int x=0;;x++){
        vector<int> r(n);
        rep(i,n) r[i] = q[i] - a[i]*x;
        bool ok = true;
        rep(i,n) if(r[i] < 0) ok = false;
        if(!ok) break;
        int y = inf;
        rep(i,n){
            if(b[i] == 0) continue; 
            y = min(y, r[i]/b[i]);
        }
        ans = max(ans, x+y);
    }
    cout << ans << endl;
    return 0;
}