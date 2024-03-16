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
int main() {
    int q;
    map<string,int> mp;
    cin >> q;
    rep(i,q){
        int query;
        cin >> query;
        if(query == 1){
            string c;
            cin >> c;
            int x;
            cin >> x;
            mp[c] = x;
        }
        else if(query == 2){
            string s;
            cin >> s;
            cout << mp[s] << endl;
        }
    }
    return 0;
}