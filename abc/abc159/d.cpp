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
ll c2(ll n){
    return n*(n-1)/2;
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,int> cnt;
    rep(i,n){
        cin >> a[i];
        cnt[a[i]]++;
    }
  
    ll sum = 0;
    for(auto p:cnt){
        sum += c2(p.second);
    }
  
    rep(i,n){
        sum -= c2(cnt[a[i]]);
        cnt[a[i]]--;
        sum += c2(cnt[a[i]]);
        cout << sum << endl;
        sum -= c2(cnt[a[i]]);
        cnt[a[i]]++;
        sum += c2(cnt[a[i]]);
    }
    return 0;
}