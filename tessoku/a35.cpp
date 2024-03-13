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
    int n;
    cin >> n;
    vector<int> a(n+1);
    rep1(i,n){
        cin >> a[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(n+1));

    rep1(i,n){
        dp[n][i] = a[i];
    }

    for(int i = n-1; i>=1;i--){
        if(i%2 == 0){
            for(int j = 1; j<= i; j++){
                dp[i][j] = min(dp[i+1][j],dp[i+1][j+1]);
            }
        }else{
            for(int j = 1; j<= i; j++){
                dp[i][j] = max(dp[i+1][j],dp[i+1][j+1]);
            }
        }
    }

    cout << dp[1][1] << endl;
    return 0;
}