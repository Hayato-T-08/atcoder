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
int main() {
    int n,a,b;
    cin>> n >> a >> b;
    vector<bool> dp(n+1,false);
    rep3(i,0,n+1){
        if( i>=a && !dp[i-a]) dp[i] = true;
        else if( i>=b && !dp[i-b]) dp[i] = true;
    }

    if(dp[n]) cout << "First" << endl;
    else cout << "Second" << endl;
    return 0;
}