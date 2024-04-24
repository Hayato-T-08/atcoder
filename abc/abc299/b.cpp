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
    int n,t;
    cin >> n >> t;
    vector<int> c(n),r(n);
    map<int,int> mp;
    rep(i,n) {
        cin >> c[i];
        mp[c[i]]++;
    }
    rep(i,n) cin >> r[i];
    int ans = 0;
    if(mp[t] == 0){
        int color = c[0];
        int max = r[0];
        rep(i,n){
            if(c[i] == color){
                if(r[i] > max){
                    max = r[i];
                    ans = i;
                }
            }
        }
    }else{
        int max = -100;
        rep(i,n){
            if(c[i] == t){
                if(r[i] > max){
                    max = r[i];
                    ans = i;
                }
            }
        }
    }
    cout << ans+1 << endl;
    return 0;
}