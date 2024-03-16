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
    ll n,d;
    cin >> n >> d;
    ll ans = 0;
    vector<ll> x(n+1),y(n+1);
    vector<vector<ll>> g(d+1);
    rep1(i,n){
        cin >> x[i] >> y[i];
        g[x[i]].push_back(y[i]);
    }

    priority_queue<ll> pq;
    rep1(i,d){
        for(int j : g[i]){
            pq.push(j);
        }

        if(!pq.empty()){
            ans += pq.top();
            pq.pop();
        }
    }
    cout << ans << endl;
    return 0;
}