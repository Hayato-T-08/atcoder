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
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    int h,w,n;
    cin >> h >> w >> n;
    vector<string> s(h);
    rep(i,h){
        rep(j,w){
            s[i].push_back('.');
        }
    };
    P cur = {0,0};
    int d = 0;
    rep(i,n){
        if(s[cur.first][cur.second] == '.'){
            s[cur.first][cur.second] = '#';
            d++;
            d %= 4;
            cur.first += dx[d];
            cur.second += dy[d];
        }
        else if(s[cur.first][cur.second] == '#'){
            s[cur.first][cur.second] = '.';
            d--;
            d += 4;
            d %= 4;
            cur.first += dx[d];
            cur.second += dy[d];
        }
        if(cur.first < 0) cur.first += h;
        if(cur.first >= h) cur.first -= h;
        if(cur.second < 0) cur.second += w;
        if(cur.second >= w) cur.second -= w;
    }
    rep(i,h){
        cout << s[i] << endl;
    }
    return 0;
}