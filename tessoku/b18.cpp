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
    int n,s;
    cin >> n >> s;
    vector<vector<bool>> dp(n+1,vector<bool>(s+1,false));
    vector<int> a(n+1);
    rep3(i,1,n+1){
        cin >> a[i];
    }

    dp[0][0] = true;
    rep3(i, 1, n+1){
        dp[0][i] = false;
    }
    rep3(i,1,n+1){
        rep(j,s+1){
            if(j < a[i]){
                if(dp[i-1][j]) dp[i][j] = true;
            }else{
                if(dp[i-1][j] || dp[i-1][j-a[i]]) dp[i][j] = true;
            }
        }
    }

    if(!dp[n][s]){
        cout << -1 << endl;
        return 0;
    }

    int place = s;
    vector<int> ans;
    for(int i=n;i>=1;i--){
        if(dp[i-1][place]){
            continue;
        }else{
            place = place - a[i];
            ans.push_back(i);
        }
    }

    reverse(ans.begin(),ans.end());

    cout<<ans.size()<<endl;
    rep(i,ans.size()){
        cout << ans[i] << " ";
    }
    return 0;
}