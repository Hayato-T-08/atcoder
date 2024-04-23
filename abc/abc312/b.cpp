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

vector<string> s;
bool check(int i,int j){
    rep(k,3){
        rep(l,3){
            if(s[i+k][j+l] != '#') return false;
        }
    }

    for(int k = i+6; k<i+9; k++){
        for(int l = j+6; l<j+9; l++){
            if(s[k][l] != '#') return false;
        }
    }

    rep(k,4){
        if(s[i+k][j+3] != '.') return false;
    }

    rep(k,4){
        if(s[i+3][j+k] != '.') return false;
    }

    rep(k,4){
        if(s[i+5][j+5+k] != '.') return false;
    }

    rep(k,4){
        if(s[i+5+k][j+5] != '.') return false;
    }


    // cout << cntb << " " << cntw << endl;
    return true;
}

int main() {
    int n,m;
    cin >> n >> m;
    s.resize(n);
    rep(i,n) cin >> s.at(i);
    vector<P> ans;
    rep(i,n-8){
        rep(j,m-8){
            if(check(i,j)) ans.push_back(make_pair(i+1,j+1));
        }
    }

    rep(i,ans.size()){
        cout << ans[i].first << " " << ans[i].second << endl;
    }
    return 0;
}