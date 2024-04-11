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
    ll n;
    cin >> n;
    vector<ll> a,b;
    for(ll x = 1;x<=1e6;x++){
        a.push_back(x*x*x);
    }

    rep(i,a.size()){
        string s = to_string(a[i]);
        int size = s.size();
        bool flag = true;
        rep(j,size/2){
            if(s[j] != s[size-1-j]){
                flag = false;
                break;
            }
        }
        if(flag) b.push_back(-a[i]);
    }
    sort(b.begin(),b.end());
    auto it = lower_bound(b.begin(),b.end(),-n);
    std::cout << -(*it) << endl;

    return 0;
}