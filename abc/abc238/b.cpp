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
using ull = unsigned long long;
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> deg(361,0);
    rep(i,n) cin >> a[i];
    deg[0] = 1;
    deg[360] = 1;
    int cur = 0;
    rep(i,n){
        cur += a[i];    
        cur %= 360;
        deg[cur] = 1;
    }
    int ans = 0;
    rep(i,361){
        if(deg[i] == 1){
            chmax(ans,i-cur);
            cur = i;
        }
    }
    cout << ans << endl;
    return 0;
}