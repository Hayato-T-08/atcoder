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
vector<ll> Power100,h,hrev,t,trev;
string s,srev;
ll n,q;
ll GetHashLeft(int l, int r){
    ll val = h[r] - (h[l -1] * Power100[r - l + 1]) % mod;
    if(val < 0) val += mod;
    return val;
}

ll GetHashRight(int l, int r){
    int true_l = n - r + 1;
    int true_r = n - l + 1;
    ll val = hrev[true_r] - (hrev[true_l - 1] * Power100[true_r - true_l + 1]) % mod;
    if(val < 0) val += mod;
    return val;
}

int main() {
    cin >> n >> q;
    cin >> s;
    srev = s;
    reverse(srev.begin(),srev.end());
    t.resize(n+1);
    trev.resize(n+1);
    h.resize(n+1);
    hrev.resize(n+1);

    rep1(i,n) t[i] = (s[i-1] - 'a') + 1;
    rep1(i,n) trev[i] = (srev[i-1] - 'a') + 1;

    Power100.resize(n+1);
    Power100[0] = 1;
    rep1(i,n) Power100[i] = Power100[i-1] * 100 % mod;
    h[0] = 1;
    hrev[0] = 1;
    rep1(i,n){
        h[i] = (100 * h[i-1] + t[i]) % mod;
        hrev[i] = (100 * hrev[i-1] + trev[i]) % mod;
    }

    rep1(i,q){
        ll l,r;
        cin >> l >> r;
        ll hash1 = GetHashLeft(l,r);
        ll hash2 = GetHashRight(l,r);
        if(hash1 == hash2) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}