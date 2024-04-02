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
    ll n,d,p;
    cin >> n >> d >> p;
    vector<ll> f(n);
    rep(i,n) cin >> f[i];
    sort(f.begin(),f.end());
    reverse(f.begin(),f.end());
    ll ans = 0;
    vector<ll> sum(n);
    rep(i,n){
        if(i == 0) sum[i] = f[i];
        else sum[i] = sum[i-1] + f[i];
    }

    int cur = 0;
    while(cur < n - d){
        int l = cur, r = cur + d - 1;
        if(l == 0){
            if(sum[r] >= p){
                ans += p;
                cur += d;
            }
            else{
                ans += sum[r];
                cur += d;
            }
        }else{
            if(sum[r] - sum[l-1] >= p){
                ans += p;
                cur += d;
            }
            else{
                ans += sum[r] - sum[l-1];
                cur += d;
            }
        }
    }
    ll sum2 = 0;
    rep3(i,cur,n){
        sum2 += f[i];
    }
    if(sum2 >= p){
        ans += p;
    }else{
        ans += sum2;
    }
    cout << ans << endl;
    return 0;
}