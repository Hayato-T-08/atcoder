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
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> sum(n+1,0);
    rep(i,n){
        cin >> a[i];
    }
    rep(i,n){
        if(i==0){
            sum[i] = 0;
            sum[i+1] = 0;
        }
        else{
            if(i%2==1){
                sum[i] = sum[i-1];
            }
            else{
                sum[i] = sum[i-1] + (a[i]-a[i-1]);
            }
        }
    }
    ll q;
    cin >> q;
    vector<ll> l(q),r(q);
    rep(i,q){
        cin >> l[i] >> r[i];
    }

    rep(i,n){
        cout << sum[i] << " ";
    }
    return 0;
}