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

double dis(int x1,int x2,int y1, int y2){
    return sqrt(1.0*(x1-x2)*(x1-x2) + 1.0*(y1-y2)*(y1-y2));
}
int main() {
    int n;
    cin >> n;
    vector<int> x(n+1),y(n+1);
    rep(i,n){
        cin >> x[i] >> y[i];
    }

    vector<vector<double>> dp(1<<n,vector<double>(n,1e9));
    dp[0][0] = 0;
    rep(i,1<<n){
        rep(j,n){
            if(dp[i][j] >= 1e9) continue;
            rep(k,n){
                if((i/(1<<k))%2 == 1) continue;
                double d = dis(x[j],x[k],y[j],y[k]);
                dp[i+(1<<k)][k] = min(dp[i+(1<<k)][k],dp[i][j]+d);
            }
        }
    }

    printf("%.12lf\n",dp[(1<<n)-1][0]);
    return 0;
}