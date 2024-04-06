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
    ll d;
    cin >> d;
    ll y = 2e6;
    ll ans = d;
    for(ll x =0; x<= 2e6; x++){
        while(x*x + y*y > d && y>0){
            y--;
        }
        ans = min(ans, abs(x*x + y*y -d));
        ans = min(ans, abs(x*x + (y+1)*(y+1) -d));
    }
    cout << ans << endl;
    return 0;
}