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
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i,n) cin >> h[i];
    vector<int> dp(n,inf);
    dp[0] = 0;

    rep(i,n){
        if(i+1 < n) chmin(dp[i+1],dp[i]+abs(h[i]-h[i+1]));
        if(i+2 < n) chmin(dp[i+2],dp[i] + abs(h[i] - h[i+2]));
    }
    
    vector<int> path;
    int now = n-1;
    path.push_back(now);
    while(now != 0){
        if(now -1 >=0 && dp[now-1] + abs(h[now]-h[now-1]) == dp[now]){
            now--;
            path.push_back(now);
        }
        if(now -2 >=0 && dp[now-2] + abs(h[now]-h[now-2]) == dp[now]){
            now-=2;
            path.push_back(now);
        }
    }
    cout << path.size() << endl;
    reverse(path.begin(),path.end());
    for(auto x:path){
        cout << x+1 << " ";
    }
    cout << endl;
    return 0;
}