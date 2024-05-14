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
    int n,k;
    cin >> n >> k;
    vector<int> a(n),b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    vector<bool> dp(n,false),ep(n,false);
    dp[0] = true;
    ep[0] = true;
    for(int i=1;i<n;i++){
        if(abs(a[i] - a[i-1]) <= k && dp[i-1]){
            dp[i] = true;
        }else if(abs(a[i] - b[i-1]) <= k && ep[i-1]){
            dp[i] = true;
        }else{
            dp[i] = false;
        }

        if(abs(b[i] - a[i-1]) <= k && dp[i-1]){
            ep[i] = true;
        }else if(abs(b[i] - b[i-1]) <= k && ep[i-1]){
            ep[i] = true;
        }else{
            ep[i] = false;
        }
    }
    if(dp[n-1] || ep[n-1]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}