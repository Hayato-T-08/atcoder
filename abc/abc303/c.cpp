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
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
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
    int n,m,h,k;
    cin >> n >> m >> h >> k;
    string s;
    cin >> s;
    map<P,bool> mp;
    rep(i,m){
        int a,b;
        cin >> a >> b;
        mp[{a,b}] = true;
    }
    P now = {0,0};
    int health = h;
    bool ok = true;
    rep(i,n){
        health--;
        if(s[i] == 'R'){
            now.first += dx[0];
            now.second += dy[0];
        }else if(s[i] == 'L'){
            now.first += dx[2];
            now.second += dy[2];
        }else if(s[i] == 'D'){
            now.first += dx[3];
            now.second += dy[3];
        }else if(s[i] == 'U'){
            now.first += dx[1];
            now.second += dy[1];
        }
        if(health < 0){
            ok = false;
            cout << "No"<< endl;
            return 0;
        }else{
            if(mp[now] && health < k){
                health = k;
                mp[now] = false;
            }
        }
    }

    if(health < 0){
        ok = false;
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}