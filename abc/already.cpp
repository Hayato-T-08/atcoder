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
    string t;
    cin >> t;
    int n;
    cin >> n;
    vector<vector<string>> s(n);
    rep(i,n){
        int a;
        cin >> a;
        rep(j,a){
            string x;
            cin >> x;
            s[i].push_back(x);
        }
    }
    vector<vector<int>> dp(n+1, vector<int>(t.size()+1, inf));
    dp[0][0] = 0;
    rep(i,n){
        rep(j,t.size()+1){
            chmin(dp[i+1][j], dp[i][j]);
            for(auto x : s[i]){
                if(j+x.size() <= t.size()){
                    bool ok = true;
                    rep(k,x.size()){
                        if(t[j+k] != x[k]){
                            ok = false;
                        }
                    }
                    if(ok){
                        chmin(dp[i+1][j+x.size()], dp[i][j]+1);
                    }
                }
            }
        }
    }
    if(dp[n][t.size()] == inf){
        cout << -1 << endl;
    }
    else{
        cout << dp[n][t.size()] << endl;
    }
    return 0;
}