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
    vector<int> a(n),b;
    ll sum = 0;
    map<int,ll> mp,ans;
    
    rep(i,n){
        cin >> a[i];
        sum += a[i];
        mp[a[i]]++;

    }
    b = a;
    sort(b.begin(),b.end());
    b.erase(unique(b.begin(),b.end()),b.end());
    rep(i,b.size()){
        sum -= b[i]*mp[b[i]];
        ans[b[i]] = sum;
    }

    rep(i,n){
        cout << ans[a[i]] << " ";
    }
    return 0;
}