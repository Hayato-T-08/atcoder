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
    vector<int> a(n),b(n);
    rep3(i,1,n) cin >> a[i];
    rep3(i,2,n) cin >> b[i];
    vector<int> dp(n,inf);
    dp[0] = 0;
    rep3(i,1,n){
        if(i - 2 >= 0) dp[i] = min({dp[i],dp[i-1]+a[i],dp[i-2]+b[i]});
        else dp[i] = min(dp[i],dp[i-1]+a[i]);
    }
    
    vector<int> path;

    int now = n-1;
    path.push_back(n-1);
    while(now != 0){
        if(now - 1 >= 0 && dp[now-1] + a[now] == dp[now]){
            path.push_back(now-1);
            now--;
        }
        if(now - 2 >= 0 && dp[now-2] + b[now] == dp[now]){
            path.push_back(now-2);
            now-=2;
        }
    }
    reverse(path.begin(),path.end());
    cout << path.size() << endl;
    for(auto x : path){
        cout << x+1 << " ";
    }
    cout <<endl;
    return 0;
}