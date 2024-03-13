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
    ll n,r;
    cin>> n >> r;
    mint a=1,b=1;
    rep1(i,n){
        a *= i;
    }

    rep1(i,r){
        b *= i;
    }

    rep1(i,n-r){
        b *= i;
    }

    mint ans = a / b;
    cout << ans.val() <<endl;
    return 0;
}