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
const int inf = 1e9+1;
const int mod = 1e9+7;
const ll linf = 1e18;

int main() {
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(n),b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];
    sort(a.begin(),a.end());
    rep(i,m){
        auto it = lower_bound(a.begin(),a.end(),b[i]);
        int pre=-inf,nxt=-inf;
        if(it == a.end()){
            pre = *(it-1);
        }else if(it == a.begin()){
            nxt = *it;
        }else{
            pre = *(it-1);
            nxt = *it;
        }
        int sub = min(abs(b[i]-pre),abs(b[i]-nxt));
        cout << max(k-sub,0) << endl;
    }
    return 0;
}