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
    cin>>n;
    vector<P> xy(n+1);
    rep1(i,n){
        cin >> xy[i].first >> xy[i].second;
        xy[i].second = -xy[i].second;
    }
    sort(xy.begin(),xy.end());
    vector<int> a(n+1,0);
    rep1(i,n){
        a[i] = -xy[i].second;
    }
    int len = 0;
    vector<int> l(n+1,0);
    vector<int> dp(n+1,0);    
    rep1(i,n){
        auto pos = lower_bound(l.begin(),l.begin()+len+1,a[i]);
        int d = distance(l.begin(),pos);
        dp[i] = d;
        l[dp[i]] = a[i];
        if(dp[i] > len) len++;
    }

    cout << len << endl;

    return 0;
}