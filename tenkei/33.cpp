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
    int h,w;
    cin >> h >> w;
    int ans = 0;
    int l,r;
    l = h/2;
    r = w/2;
    if(h == 1 || w == 1){
        cout << h * w << endl;
        return 0;
    }
    if(h % 2 == 1){
        l++;
    }
    if(w % 2 == 1){
        r++;
    }
    ans = l * r;
    cout << ans << endl;
    return 0;
}