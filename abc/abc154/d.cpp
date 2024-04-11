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
    int n,k;
    cin >> n >> k;
    vector<int> p(n);
    rep(i,n) {
        cin >> p[i];
        p[i]++;
    }
    double ans = 0;
    vector<int> sum(n+1,0);
    
    rep(i,n){
        sum[i+1] = sum[i] + p[i];
    }

    ans = (double)(sum[k] - sum[0]);
    for(int i=1;i<=n-k;i++){
        ans = max(ans,(double)(sum[i+k] - sum[i]));
    }
    cout << fixed << setprecision(10) << ans/2.0 << endl;
    return 0;
}