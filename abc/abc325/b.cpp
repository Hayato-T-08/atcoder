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
    vector<int> w(n),x(n);
    rep(i,n){
        cin >> w.at(i) >> x.at(i);
    }
    int ans = 0;
    for(int i=0;i<=23;i++){
        int cnt = 0;
        rep(j,n){
            int l = i,r = i+1;
            l += x[j];
            r += x[j];
            l %= 24;
            r %= 24;
            if(l < 0) l += 24;
            if(r < 0) r += 24;
            l %= 24;
            r %= 24;
            if(l > r) swap(l,r);
            if(l >= 9 && r<=18) cnt += w[j];
        }
        ans = max(ans,cnt);
    }
    cout << ans << endl;
    return 0;
}