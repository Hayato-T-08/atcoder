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
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
int main() {
    int n;
    cin >> n;

    auto f = [&](auto f,int n){

        if(n == 0) {
            vector<vector<char>> s(1,vector<char>(1,'#'));
            return s;
        }
        
        vector<vector<char>> t = f(f,n-1);
        int l = t.size();
        vector<vector<char>> ret(3*l,vector<char>(3*l,'.'));
        rep(i,3){
            rep(j,3){
                if(i != 1 || j != 1){
                    rep(k,l){
                        rep(m,l){
                            ret[i*l+k][j*l+m] = t[k][m];
                        }
                    }
                }
            }
        }
        return ret;
    };
    auto s = f(f,n);
    rep(i,s.size()){
        rep(j,s.size()){
            cout << s[i][j];
        }
        cout << endl;
    }
    return 0;
}