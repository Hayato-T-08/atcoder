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
// int dx[4] = {1,0,-1,0};
// int dy[4] = {0,1,0,-1};
// int dx[8] = {1,1,0,-1,-1,-1,0,1};
// int dy[8] = {0,1,1,1,0,-1,-1,-1};
using ull = unsigned long long;
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }

    sort(a.begin(),a.end());
    ll ans = 0;
    rep(i,n) ans += a[i]*ll(n-1);

    int r = n-1; //一番右側の添え字
    rep(l,n){
        while(r >=0 && a[l] + a[r] >= ll(1e8)) r--;//添え字が範囲内かつa[l]+a[r]が1e8を超えない初めてのrを求める。
        //aはソートされているのでrは単調減少する。
        //rはlより大きい値を取る。
        ans -= ll(n - max(r,l)-1)*ll(1e8);//添え字はl以上なのでn-1からrとlの大きい方を引いた数だけ1e8を引く。
        //添え字は0-indexedであるためn-1 - (max(r,l+1))
    }
    cout << ans << endl;
    return 0;
}