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
using ull = unsigned long long;
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    ll n,m,p;
    cin >> n >> m >> p;
    vector<ll> a(n),b(m);
    rep(i,n){
        cin >> a[i];   
    }
    rep(i,m){
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());


    vector<ll> sumB(m,0);
    sumB[0] = b[0];
    rep3(i,1,m){
        sumB[i] = sumB[i-1] + b[i];
    }

    ll ans = 0;
    rep(i,n){
        int idx = lower_bound(b.begin(),b.end(),p-a[i]) - b.begin();
        if(idx == 0){
            ans += p*m;
        }else if(idx == m){
            ans += a[i] * m + sumB[m-1];
        }else{
            ans += (m-idx)*p;
            ans += idx*a[i] + sumB[idx-1];
        }
    }
    cout << ans << endl;
    return 0;
}