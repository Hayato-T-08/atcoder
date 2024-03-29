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
    vector<int> a(3*n+1);
    map<int,int> mp;
    rep1(i,3*n){
        cin >> a[i];
    }
    vector<P> b;
    rep1(i,3*n){
        mp[a[i]]++;
        if(mp[a[i]] == 2){
            b.push_back({i,a[i]});
        }
    }
    sort(b.begin(),b.end());

    rep(i,b.size()){
        cout << b[i].second << " ";
    }
    cout << endl;
    return 0;
}