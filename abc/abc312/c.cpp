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
int n,m;
vector<ll> a,b;
bool isOK(ll mid) {
    int i = upper_bound(a.begin(),a.end(), mid) - a.begin();
    int j = upper_bound(b.begin(),b.end(), -mid) - b.begin();
    if (i>=j) return true;
    else return false;
}

// 汎用的な二分探索のテンプレ
ll binary_search() {
    ll left = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
    ll right = 1e9 + 1; // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    /* どんな二分探索でもここの書き方を変えずにできる！ */
    while (right - left > 1) {
        ll mid = left + (right - left) / 2;

        if (isOK(mid)) right = mid;
        else left = mid;
    }

    /* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている */
    return right;
}
int main() {

    cin >> n >> m;
    a.resize(n);
    b.resize(m);
    rep(i,n) cin >> a[i];
    rep(i,m){
        int x;
        cin >> x;
        b[i] = -x;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    cout << binary_search() << endl;
    return 0;
}