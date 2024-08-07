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
    int n;
    cin >> n;
    vector<ll> a(12),b;
    a[0] = 1;
    rep(i,12){
        a[i+1] = a[i]*10+1;
    }

    rep(i,12){
        rep(j,12){
            rep(k,12){
                b.push_back(a[i]+a[j]+a[k]);
            }
        }
    }

    sort(b.begin(),b.end());   

    b.erase(unique(b.begin(),b.end()),b.end());
    cout << b[n-1] << endl;
    return 0;
}