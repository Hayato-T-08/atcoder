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
    int n,t;
    cin >> n >> t;
    vector<unsigned long long> p(n,0);
    set<unsigned long long> s;
    map<unsigned long long,unsigned long long> mp;
    mp[0] = n;
    rep(i,t){
        int a,b;
        cin >> a >> b;
        a--;
        mp[p[a]]--;
        if(mp[p[a]] == 0) mp.erase(p[a]);
        p[a] += b;
        mp[p[a]]++;
        cout << mp.size() << endl;
    }
    return 0;
}