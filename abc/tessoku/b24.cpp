#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
int main() {
    int n;
    cin >> n;
    
    vector<P> box(n);
    rep(i,n) cin >> box[i].first >> box[i].second;

    auto f = [&](P a, P b){
        if(a.first == b.first){
            return a.second > b.second;
        }
        return a.first < b.first;
    };
    sort(all(box),f);

    vector<int> l(n+1);
    int len = 0;
    rep1(i,n){
        int it = lower_bound(l.begin()+1,l.begin()+len+1, box[i-1].second) - l.begin();
        l[it] = box[i-1].second;
        if(it > len) len++;
    } 
    cout << len << endl;

    return 0;
}