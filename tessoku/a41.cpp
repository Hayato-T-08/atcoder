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
int main() {
    int n;
    string s;
    cin >> n >> s;
    ll red = 0,blue = 0;

    rep(i,n){
        if(red == 3) break;
        if(s[i] == 'R') red++;
        else red = 0;
    }

    rep(i,n){
        if(blue == 3) break;
        if(s[i] == 'B') blue++;
        else blue = 0;
    }

    if(red == 3 || blue == 3) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}