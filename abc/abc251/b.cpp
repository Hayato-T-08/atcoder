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
    int n;
    cin >> n;
    int w;
    cin >> w;
    vector<int> a(n);
    set<ll> s;
    rep(i,n) cin >> a[i];
    rep(i,n){
        if(a[i] <= w) s.insert(a[i]);
    }
    if(n == 1){
        cout << s.size() << endl;
        return 0;
    }
    rep(i,n){
        rep3(j,i+1,n){
            if(a[i] + a[j] <= w) s.insert(a[i] + a[j]);
        }
    }
    if(n == 2){
        cout << s.size() << endl;
        return 0;
    }

    rep(i,n){
        rep3(j,i+1,n){
            rep3(k,j+1,n){
                if(a[i] + a[j] + a[k] <= w) s.insert(a[i] + a[j] + a[k]);
            }
        }
    }

    cout << s.size() << endl;
    return 0;
}