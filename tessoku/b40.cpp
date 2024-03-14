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
    vector<ll> a(n+1);
    vector<int> cnt(101,0);
    rep1(i,n){
        cin >> a[i];
        cnt[a[i] % 100]++;
    }

    ll ans = 0;
    rep3(i,1,50){
        ans += cnt[i] * cnt[100-i];
    }

    ans += cnt[0] * (cnt[0] - 1) / 2;
    ans += cnt[50] * (cnt[50] - 1) / 2;

    cout << ans << endl;
    return 0;
}