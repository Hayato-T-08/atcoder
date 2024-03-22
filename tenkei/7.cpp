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
    int n;
    cin >> n;
    set<ll> a;
    rep(i,n){
        ll x;
        cin >> x;
        a.insert(x);
    }

    int q;
    cin >> q;
    rep(i,q){
        ll x;
        cin >> x;
        auto itr = a.lower_bound(x);
        ll nex = inf, pre = inf;
        if(itr == a.end()){
            pre = x - *(--itr);
        }else if(itr == a.begin()){
            nex = *itr - x;
        }else{
            nex = *itr - x;
            pre = x - *(--itr);
        }
        cout << min(nex,pre) << endl;
    }
    return 0;
}