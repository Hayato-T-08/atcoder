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
    int size=1;
    for(int i=0;i<n;i++){
        size*=3;
    }   
    vector<vector<char>> s(size,vector<char>(size,'#'));

    rep(i,size){
        rep(j,size){
            int tmp = 1;
            rep(k,n){
                if((i/(tmp))%3 == 1 && (j/(tmp))%3 == 1){
                    s[i][j] = '.';
                }
                tmp *= 3;
            }
        }
    } 

    rep(i,size){
        rep(j,size){
            cout << s[i][j];
        }
        cout << endl;
    }
    return 0;
}