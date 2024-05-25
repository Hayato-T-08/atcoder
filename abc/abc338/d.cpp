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
// int dx[4] = {1,0,-1,0};
// int dy[4] = {0,1,0,-1};
// int dx[8] = {1,1,0,-1,-1,-1,0,1};
// int dy[8] = {0,1,1,1,0,-1,-1,-1};
using ull = unsigned long long;
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> x(m);
    rep(i,m){
        cin >> x[i];
        x[i]--;
    }
    vector<ll> d(n+1);
    auto add = [&](int l, int r, int x){
        d[l] += x;
        d[r] -= x;
    };
    
    rep(i,m-1){
        int s = x[i], t = x[i+1];
        if(s > t) swap(s,t);
        ll a = t - s, b = n-a;
        add(0,s,a);
        add(s,t,b);
        add(t,n,a);
    }
    rep(i,n){
        d[i+1] += d[i];
    }

    ll ans = *min_element(d.begin(),d.begin()+n);
    cout << ans << endl;
    return 0;
}