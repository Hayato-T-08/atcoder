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
void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    vector<vector<bool>> visited(h,vector<bool>(w,false));
    P now = {0,0};
    auto f = [&](P now){
        if(s[now.first][now.second] == 'U' && now.first != 0) now.first--;
        if(s[now.first][now.second] == 'D' && now.first != h-1) now.first++;
        if(s[now.first][now.second] == 'L' && now.second != 0) now.second--;
        if(s[now.first][now.second] == 'R' && now.second != w-1) now.second++;
        return now;
    };

    while(1){


        if(visited[now.first][now.second]){
            cout << -1 << endl;
            return 0;
        }
        visited[now.first][now.second] = true;
        if(s[now.first][now.second] == 'U' && now.first != 0) now.first--;
        else if(s[now.first][now.second] == 'D' && now.first != h-1) now.first++;
        else if(s[now.first][now.second] == 'L' && now.second != 0) now.second--;
        else if(s[now.first][now.second] == 'R' && now.second != w-1) now.second++;
        else{
            cout << now.first+1 << " " << now.second+1 << endl;
            return 0;
        }
;
    }
    return 0;
}