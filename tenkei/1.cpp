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
vector<int> a;
int n,l,k;
bool isOk(int x,int k){
    int last = 0;
    int cnt = 0;
    rep1(i,n){
        if(a[i]-last >= x && l-a[i] >= x){
            last = a[i];
            cnt++;
        }
    }
    if(cnt >= k) return true;
    else return false;
}

int main() {

    cin >> n >> l >> k;
    a.resize(n+1);
    rep1(i,n) cin >> a[i];
    ll left = 1;
    ll right = (ll) 1e9;
    while(right - left > 1){
        ll mid = left + (right - left) / 2;
        if(isOk(mid,k)) left = mid;
        else right = mid;
    }
    cout << left << endl;
    return 0;
}