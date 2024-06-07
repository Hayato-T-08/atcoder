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
    int n,s;
    cin >> n >> s;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<vector<bool>> dp(10001,vector<bool>(10001,false));
    dp[0][0] = true;

    rep1(i,n){
        for(int j=0;j <= 10000; j++){
            dp[i][j] = dp[i-1][j];
            if(j-a[i-1] >= 0 and dp[i-1][j-a[i-1]]) dp[i][j] = true; 
        }
    }

    if(!dp[n][s]){
        cout << -1 << endl;
        return 0;
    }

    vector<int> num;
    int tmp = s;
    for(int i = n; i >= 1; i--){
        if(tmp - a[i-1] >= 0 and dp[i-1][tmp-a[i-1]]){
            tmp-= a[i-1];
            num.push_back(i);
        }
    }
    cout << num.size() << endl;
    reverse(num.begin(),num.end());
    for(auto x: num) cout << x << " ";
    cout << endl;
    return 0;
}