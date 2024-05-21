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
using mint = modint998244353;
const int inf = 1e9;
const int mod = 1e9+7;
const ll linf = 1e18;
// int dx[4] = {1,0,-1,0};
// int dy[4] = {0,1,0,-1};
// int dx[8] = {1,1,0,-1,-1,-1,0,1};
// int dy[8] = {0,1,1,1,0,-1,-1,-1};
using ull = unsigned long long;
void chmin(ll& a, ll b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    int n;
    cin >> n;
    string t;
    cin >> t;
    vector<int> ans;
    auto f1 = [&](string s,string t){
        if(t.size() != s.size() + 1) return false;
        int cur = 0;
        for(int i = 0; i < t.size(); i++){
            if(t[i] == s[cur]) cur++;
            if(cur == s.size()) return true;
        }
        return cur == s.size();
    };

    auto f2 = [&](string s,string t){
        if(t.size() != s.size()) return false;
        int error = 0;
        for(int i = 0; i < t.size(); i++){
            if(t[i] != s[i]) error++;
            if(error > 1) return false;
        }
        return error == 1;
    };

    rep(i,n){
        string s;
        cin >> s;
        if(s.size() == t.size() or s.size() == t.size() + 1 or s.size() == t.size() - 1){
            if(f1(s,t) or f2(s,t) or s == t or f1(t,s)){
                ans.push_back(i+1);
            }
        }
    }
    cout << ans.size() << endl;
    for(auto x : ans){
        cout << x << " ";
    }
    return 0;
}