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
    int n,x,y;
    cin>> n >> x >> y;
    vector<ll> a(n+1);
    rep1(i,n){
        cin >> a[i];
    }
    ll sum = 0;
    rep1(i,n){
        ll jud = a[i]%5;
        ll grundy;
        if(jud<=1) grundy = 0;
        else if(jud<=3) grundy = 1;
        else grundy = 2;
        sum ^= grundy;
    }

    if(sum == 0) cout << "Second" << endl;
    else cout << "First" << endl;
}
