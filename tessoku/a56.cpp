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
ll mod = 2147483647;   
vector<ll> t,h,power100;
ll Hash(int l, int r){
    ll val = h[r] - (h[l -1] * power100[r-l+1]) % mod;
    if(val < 0) val += mod;
    return val;
}
int main() {
    
    ll n,q;
    string s;
    cin >> n >> q;
    cin >> s;
    t.resize(n+1);
    h.resize(n+1);
    power100.resize(n+1);
 
    rep1(i,n){
        t[i] = (s[i-1] - 'a') + 1;
    }
    power100[0] = 1;
    rep1(i,n) power100[i] = power100[i-1] * 100 % mod;
    h[0] = 0;
    rep1(i,n) h[i] = (100 * h[i-1] + t[i]) % mod;

    rep(i,q){
        ll a,b,c,d;
        cin >> a >> b >> c >> d;
        ll hash1 = Hash(a,b);
        ll hash2 = Hash(c,d);
        if(hash1 == hash2) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}