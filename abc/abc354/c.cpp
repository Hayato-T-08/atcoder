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
    int n;
    cin >> n;
    
    vector<P> num(n);
    rep(i,n){
        cin >> num[i].first >> num[i].second;
    }
    vector<int> k(n);
    iota(k.begin(), k.end(), 0);
    sort(k.begin(), k.end(), [&](int i, int j){
        return num[i] < num[j];
    });
    
    vector<int> ans;
    set<int> s;
    rep(i,n) s.insert(num[i].second);

    rep(i,n-1){
        auto it = s.begin();

        if(num[k[i]].second == *it){
            ans.push_back(k[i]+1);
        }
        s.erase(num[k[i]].second);
    }
    ans.push_back(k[n-1]+1);
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(auto x : ans){
        cout << x << " ";
    }


    return 0;
}