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
int n;
vector<vector<char>> s;
vector<int> cntW,cntH;

int main() {
    
    cin >> n;
    s.resize(n, vector<char>(n));
    cntW.resize(n);
    cntH.resize(n);
    rep(i,n){
        rep(j,n) cin >> s[i][j];
    }
    ll res = 0;
    rep(i,n){
        rep(j,n){
            if(s[i][j] == 'o') cntW[i]++;
            if(s[i][j] == 'o') cntH[j]++;
        }
    }
    rep(j,n){
        rep(i,n){
            if(s[i][j] == 'o'){
                res += (cntW[i]-1)*(cntH[j]-1);
            }
        }
    }

    cout << res << endl;
    return 0;
}