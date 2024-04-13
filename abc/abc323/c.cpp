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
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    vector<string> s(n);
    rep(i,m) cin >> a[i];
    rep(i,n) cin >> s[i];
    vector<ll> p(n,0);

    rep(i,n){
        rep(j,m){
            if(s[i][j] == 'o') p[i]+=(a[j]);
        }
        p[i] += (i+1);
    }
    vector<vector<int>> q(n);
    rep(i,n){
        rep(j,m){
            if(s[i][j] == 'x') q[i].push_back(a[j]);
        }
        sort(q[i].begin(),q[i].end());
        reverse(q[i].begin(),q[i].end());
    }
    int max = *max_element(p.begin(),p.end());


    rep(i,n){
        if(p[i] == max){
            cout << 0 << endl;
        }else{
            int ans = 0;
            while(p[i] < max){
                p[i] += q[i][ans];
                ans++;
            }
            cout << ans << endl;

    }
    return 0;
}