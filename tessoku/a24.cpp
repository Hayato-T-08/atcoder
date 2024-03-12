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
    rep3(i,1,n+1){
        cin >> a[i];
    }
    vector<int> l(n+1,0),dp(n+1,0);
    int len = 0;

    rep1(i,n){
        auto it = lower_bound(l.begin(),l.begin()+len+1,a[i]);
        int pos = distance(l.begin(),it);
        dp[i] = pos;
        l[dp[i]] = a[i];
        if(dp[i] > len) len++;
    }
    cout << len << endl;
    return 0;
}