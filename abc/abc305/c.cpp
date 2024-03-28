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
int h,w;
vector<vector<char>> s;
int main() {
    cin >> h >> w;
    s.resize(h,vector<char>(w));
    rep(i,h){
        rep(j,w){
            cin >> s[i][j];
        }
    }
    int lenh = 0,lenw = 0;
    rep(i,h){
        int cnt = 0;
        rep(j,w){
            if(s[i][j] == '#') cnt++;
        }
        lenw = max(lenw,cnt);
    }

    rep(i,w){
        int cnt = 0;
        rep(j,h){
            if(s[j][i] == '#') cnt++;
        }
        lenh = max(lenh,cnt);
    }
    int ansx,ansy;

    rep(i,h){
        int cnt = 0;
        rep(j,w){
            if(s[i][j] == '#') cnt++;
        }
        if(cnt == lenw-1){
            ansx = i;
            break;
        }
    }

    rep(i,w){
        int cnt = 0;
        rep(j,h){
            if(s[j][i] == '#') cnt++;
        }
        if(cnt == lenh-1){
            ansy = i;
            break;
        }
    }

    cout << ansx+1 << " " << ansy+1 << endl;
    return 0;
}