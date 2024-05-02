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
// int dx[4] = {1,0,-1,0};
// int dy[4] = {0,1,0,-1};
// int dx[8] = {1,1,0,-1,-1,-1,0,1};
// int dy[8] = {0,1,1,1,0,-1,-1,-1};
using ull = unsigned long long;
int n,m;
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

bool check(vector<int> p, vector<int> c, vector<vector<bool>> f, int i, int j){
    bool flag1 = false, flag2 = true, flag3 = false;
    if(p[i] >= p[j]) flag1 = true;
    rep(k,m){
        if(f[i][k] && !f[j][k]) flag2 = false;
        if(!f[i][k] && f[j][k]) flag3 = true;
    }
    flag3 |= p[i] > p[j];
    return flag1 && flag2 && flag3;
}

int main() {

    cin >> n >> m;
    vector<int> p(n),c(n);
    vector f(n,vector<bool>(m));
    rep(i,n){
        cin >> p[i] >> c[i];
        rep(j,c[i]) {
            int x;
            cin >> x;
            x--;
            f[i][x] = true;
        }
    }

    rep(i,n){
        rep(j,n){
            if(i == j) continue;
            if(check(p,c,f,i,j)){
                cout << "Yes" << endl;  
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}