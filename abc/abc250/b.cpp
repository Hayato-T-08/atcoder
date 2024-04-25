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
void show(int i,int j,int a,int b,vector<vector<char>> &v,vector<vector<char>> &ans){
    rep(k,a){
        rep(l,b){
            ans[i*a+k][j*b+l] = v[k][l];
        }
    }
}
int main() {
    int n,a,b;
    cin >> n >> a >> b;
    vector<vector<char>> bl(a,vector<char>(b)),w(a,vector<char>(b));
    vector<vector<char>> ans(a*n,vector<char>(b*n));
    rep(i,a){
        rep(j,b){
            bl[i][j] = '#';
            w[i][j] = '.';
        }
    }

    rep(i,n){
        rep(j,n){
            if(i % 2 == 0 && j % 2 == 0){
                show(i,j,a,b,w,ans);
            }else if(i % 2 == 0 && j % 2 == 1){
                show(i,j,a,b,bl,ans);
            }else if(i % 2 == 1 && j % 2 == 0){
                show(i,j,a,b,bl,ans);
            }else {
                show(i,j,a,b,w,ans);
            }
        }

    }
    rep(i,a*n){
        rep(j,b*n){
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}