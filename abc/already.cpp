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

int main() {
    int h,w,n;
    cin >> h >> w >> n;
    string t;
    cin >> t;
    vector<string> s(h);
    rep(i,h){
        cin >> s[i];
    }
    int ans = 0;
    rep(i,h){
        rep(j,w){
            if(s[i][j] == '#') continue;
            bool ok = true;
            P cur = {i,j};
            rep(k,n){
                
                if(t[k] == 'U') cur.first--;
                if(t[k] == 'D') cur.first++;
                if(t[k] == 'L') cur.second--;
                if(t[k] == 'R') cur.second++;
                if(cur.first < 0 || cur.first >= h || cur.second < 0 || cur.second >= w || s[cur.first][cur.second] == '#')
                { ok = false;
                    break;
                    }
                if(s[cur.first][cur.second] == '#'){ ok = false;
                    break;}
            }

            if(ok) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}