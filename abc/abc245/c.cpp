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
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n),b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    Graph g(n*2);

    rep(i,n-1){
        if(abs(a[i]-a[i+1]) <= k){
            g[i].push_back(i+1);
 
        }
        if(abs(a[i] - b[i+1]) <= k){
            g[i].push_back(n+i+1);

        }
        if(abs(b[i] - a[i+1]) <= k){
            g[n+i].push_back(i+1);

        }
        if(abs(b[i] - b[i+1]) <= k){
            g[n+i].push_back(n+i+1);

        }
    }
    vector<bool> seen(n*2,false);
    bool flag1 = false,flag2 = false;
    auto f = [&](auto f, int v) -> void {
        seen[v] = true;
        for(int nv : g[v]){
            if(seen[nv]) continue;
            f(f,nv);
        }
    };
    f(f,0);
    flag1 = seen[n-1] || seen[2*n-1];
    // for(auto x:seen){
    //     cout << x << " ";
    // }
    seen.assign(n*2,false);
    f(f,n);
    flag2 = seen[n-1] || seen[2*n-1];
    if(flag1 || flag2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}