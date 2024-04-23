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
    int n;
    cin >> n;
    vector<vector<int>> w(n,vector<int>(38,0));
    rep(i,n){
        int c;
        cin >> c;
        w[i][37] = c;
        rep(j,c){
            int a;
            cin >> a;
            a;
            w[i][a]++;
        }
    }
    int x;
    cin >> x;
    vector<P> ans;
    rep(i,n){
        if(w[i][x] > 0){
            ans.push_back(make_pair(w[i][37],i+1));
        }
    }
    sort(ans.begin(),ans.end());
    if(ans.size() == 0){
        cout << 0 << endl;
        return 0;
    }
    int min = ans[0].first;
    int cnt = 0;
    rep(i,ans.size()){
        if(ans[i].first == min) cnt++;
    }
    cout << cnt << endl;
    rep(i,ans.size()){
        if(ans[i].first == min){
            cout << ans[i].second << " ";
        }
    }
    return 0;
}