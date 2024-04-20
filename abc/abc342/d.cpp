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
    string s;
    vector<int> cnt(10);
    cin >> n >> s;
    rep(i,n){
        cnt[s[i]-'0']++;
    }
    vector<string> x;
    for(ll i=0; i*i<=1e13;i++){
        x.push_back(to_string(i*i));
    }
    vector<vector<int>> cntx(x.size(),vector<int>(10));
    rep(i,x.size()){
        if(x[i].size() < n) {
            x[i][0] = n - x[i].size();
        }
        rep(j,x[i].size()){
            cntx[i][x[i][j]-'0']++;
        }
    }
    ll ans = 0;
    rep(i,x.size()){
        bool ok = true;
        rep(j,10){
            if(cnt[j] != cntx[i][j]) ok = false;
        }
        if(ok){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}