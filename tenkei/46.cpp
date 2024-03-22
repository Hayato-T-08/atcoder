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
    vector<int> a(n+1),b(n+1),c(n+1),d;
    rep1(i,n) cin >> a[i];
    rep1(i,n) cin >> b[i];
    rep1(i,n) cin >> c[i];

    vector<int> a46(46,0),b46(46,0),c46(46,0);
    rep1(i,n){
        a46[a[i]%46]++;
        b46[b[i]%46]++;
        c46[c[i]%46]++;
    }
    ll ans=0;
    rep(i,46){
        rep(j,46){
            rep(k,46){
                if((i+j+k)%46 == 0){
                    ans += (ll)a46[i]*b46[j]*c46[k];
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}