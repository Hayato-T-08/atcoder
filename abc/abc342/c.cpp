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
    string s;
    cin >> s;
    map<char,char> mp;
    rep(i,n){
        mp[s[i]] = s[i];
    }
    int q;
    cin >> q;
    rep(i,q){
        char c,d;
        cin >> c >> d;
        rep(i,26){
            char tmp = 'a' + i;
            if(mp[tmp] == c) mp[tmp] = d;
        }
    }

    rep(i,n){
        cout << mp[s[i]];
    }
    cout << endl;
    return 0;
}