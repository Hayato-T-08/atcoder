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
    vector<int> a(n);
    map<int,int> mp;
    int f=-1;
    rep(i,n){
        cin >> a[i];

        if(a[i] != -1) a[i]--;
        else f=i;
        mp[a[i]] = i;
    }
    vector<int> ans;
    ans.push_back(f+1);
    int cur = f;
    rep(i,n-1){
        ans.push_back(mp[cur] + 1);
        cur = mp[cur];
    }

    rep(i,n){
        cout << ans[i];
        if(i != n-1) cout << " ";
    }
    return 0;
}