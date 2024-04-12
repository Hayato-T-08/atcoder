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

int main() {
    int n,q;
    string s,t;
    cin >> n >> q;
    cin >> t;
    s = "#" + t;
    vector<int> sum(n+1,0);
    rep1(i,n-1){
        if(s[i] == s[i+1]) sum[i] = sum[i-1] + 1;
        else sum[i] = sum[i-1];
    }
    sum[n] = sum[n-1];
    rep(i,q){
        int l,r;
        cin >> l >> r;
        cout << sum[r-1] - sum[l-1] << endl;
    }

    return 0;
}