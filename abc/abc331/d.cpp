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
    cin >> n;
    cin >> m;
    vector<int> a(m);
    vector<ll> cnt(n+1,0);
    rep(i,m) cin >> a[i];
    ll ans = -1;
    rep(i,m){
        if(i == 0){
            ans = a[i];
            cnt[a[i]]++;
            cout << ans << endl;
        }else{
            cnt[a[i]]++;
            if(cnt[ans] == cnt[a[i]]){
                ans = ans < a[i] ? ans : a[i];
                cout << ans << endl;
            }else if(cnt[ans] < cnt[a[i]]){
                ans = a[i];
                cout << ans << endl;
            }else if(cnt[ans] > cnt[a[i]]){
                cout << ans << endl;
            }
        }
    }


    return 0;
}