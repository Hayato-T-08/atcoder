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
int n;
vector<P> ans;

void chmin(int& a, int b){
    if(a > b) a = b;
}
void chmax(int& a, int b){
    if(a < b) a = b;
}

int main() {
    cin >> n;
    vector<int> a(n),pos(n);
    rep(i,n){
        cin >> a[i];
        a[i]--;
        pos[a[i]] = i;
    }

    rep(i,n){
        if(a[i] == i) continue;
        swap(a[i],a[pos[i]]);
        pos[a[pos[i]]] = pos[i];
        ans.push_back(P(i,pos[i]));
    }
    cout << ans.size() << endl;
    for(auto p : ans){
        cout << p.first + 1 << " " << p.second + 1 << endl;
    }
    return 0;
}