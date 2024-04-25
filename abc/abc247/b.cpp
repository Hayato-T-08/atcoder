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
    vector<string> s(n),t(n);
    rep(i,n){
        cin >> s[i] >> t[i];
    }

    rep(i,n){
        bool flag1 = true,falg2 = true;
        rep(j,n){
            if(i == j) continue;
            if(s[i] == s[j] or s[i] == t[j]) flag1 = false;
        }
        rep(j,n){
            if(i == j) continue;
            if(t[i] == t[j] or t[i] == s[j]) falg2 = false;
        }
        if(!flag1 and !falg2){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}