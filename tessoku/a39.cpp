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
    vector<P> lr(n+1);
    rep1(i,n){
        cin >> lr[i].second >> lr[i].first;
    }

    sort(lr.begin(),lr.end());
    ll ans = 0;
    int start = -100;
    int fin = -100;
    rep1(i,n){
        start = lr[i].second;
        if(fin <= start){
            ans++;
            fin = lr[i].first;
        }
    }

    cout << ans << endl;
    return 0;
}