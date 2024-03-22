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
    ll n,a,b,c;
    cin >> n >> a >> b >> c;
    ll ans = inf;
    for(int i=0;i<1e4;i++){
        for(int j=0;j+i<1e4;j++){
            ll x = n - a*i - b*j;
            if(x < 0) break;
            if(x % c == 0){
                ans = min(ans,i+j+x/c);
            }
        }
    }



    cout << ans << endl;
    return 0;
}