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

int main() {
    int n;
    cin >> n;
    string c;
    cin >> c;

    int cntR = 0;
    int cntW = 0;

    rep(i,n){
        if(c[i] == 'R') cntR++;
        else cntW++;
    }
    int ans = inf;
    int lW=0;
    int rR=cntR;
    ans = max(lW,rR);
    rep(i,n){
        if(c[i] == 'R') rR--;
        else lW++;
        ans = min(ans,max(lW,rR));
    }
    ans = min(ans,max(cntW,0));
    cout << ans << endl;
    return 0;
}