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
    int n;
    cin >> n;
    vector<ll> a(n+1,0),b(n+1,0),suma(n+1,0),sumb(n+1,0);
    rep1(i,n){
        int c,p;
        cin >> c >> p;
        if(c == 1){
            a[i] = p;
        }else{
            b[i] = p;
        }
    }

    rep1(i,n){
        suma[i] = suma[i-1] + a[i];
        sumb[i] = sumb[i-1] + b[i];
    }

    int q;
    cin >> q;
    rep(i,q){
        int l,r;
        cin >> l >> r;
        cout << suma[r] - suma[l-1] << " " << sumb[r] - sumb[l-1] << endl;
    }
    return 0;
}