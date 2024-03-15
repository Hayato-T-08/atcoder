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
int main() {
    int n;
    cin >> n;
    vector<ll> a(n+1),b(n+1);

    rep1(i,n){
        cin >> a[i] >> b[i];
    }

    //表正
    ll ans1 = 0;
    rep1(i,n){
        if(a[i] + b[i] >0) ans1 += a[i] + b[i];
    }

    ll ans2 = 0;
    rep1(i,n){
        if(a[i] - b[i] > 0) ans2 += a[i] - b[i];
    }

    ll ans3 = 0;
    rep1(i,n){
        if(-a[i] + b[i] > 0) ans3 += -a[i] + b[i];
    }

    ll ans4 = 0;
    rep1(i,n){
        if(-a[i] - b[i] > 0) ans4 += -a[i] - b[i];
    }

    cout << max({ans1,ans2,ans3,ans4}) << endl;
    return 0;
}