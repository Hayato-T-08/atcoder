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
mint calc(ll a, ll b){
    mint ans = 1;
    mint p = a;
    while(b>0){
        if(b & 1){
            ans *= p;
        }       
        p *= p;
        b >>= 1;
    }
    return ans;
}
int main() {
    ll a,b;
    cin>> a >> b;
    mint ans = calc(a,b);
    cout << ans.val() << endl;
    return 0;
}