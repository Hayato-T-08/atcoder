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

bool ok(int i1,int j1,int i2,int j2,int d){
    return abs(i1-i2) + abs(j1-j2) <= d;
}

int main() {
    int r,c;
    cin >> r >> c;
    vector<string> s(r);
    rep(i,r) cin >> s[i];
    rep(i,r){
        rep(j,c){
            if(s[i][j] >= '1' && s[i][j] <= '9'){
                int d = s[i][j] - '0';
                s[i][j] = '.';
                
                rep(k,r){
                    rep(l,c){
                        if(ok(i,j,k,l,d)){
                            if(s[k][l] == '#') s[k][l] = '.';
                        }
                    }
                }
            }
        }
    }

    rep(i,r){
        cout << s[i] << endl;
    }
    return 0;
}