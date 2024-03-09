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
    vector<int> h(n,0),dp(n,0);
    rep(i,n){
        cin >> h[i];
    }
    dp[1] = abs(h[1]-h[0]);
    rep3(i,2,n){
        dp[i] = min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
    }

    int place = n-1;

    vector<int> ans;
    while(true){
        ans.push_back(place);
        if(place == 0) break;

        if(dp[place] == dp[place-1]+abs(h[place]-h[place-1])){
            place--;
        }else{
            place -= 2;
        }
    }

    reverse(ans.begin(),ans.end());

    cout << ans.size() << endl;
    rep(i,ans.size()){
        cout << ans[i] + 1 << " ";
    }
}