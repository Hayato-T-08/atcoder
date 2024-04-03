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
vector<ll> l;
int n,m;
vector<ll> sum;

int main() {
    cin >> n >> m;
    l.resize(n);
    rep(i,n) cin >> l[i];
    sum.resize(n+1);
    ll wa = 0;
    ll ac = 1e15;
    while(ac-wa > 1) {
        ll wj = (ac+wa)/2;
        auto f = [&](ll w){
            int line = 0;
            ll rem = 0;
            rep(i,n){
                if(rem >= l[i] + 1){
                    rem -= l[i] + 1;
                }else{
                    line++;
                    rem = w - l[i];
                    if(rem < 0) return false;
                }
            }
            return line <= m;
        };
        if(f(wj)){
            ac = wj;
        }else{
            wa = wj;
        }
    }
    cout << ac << endl;
    return 0;
}