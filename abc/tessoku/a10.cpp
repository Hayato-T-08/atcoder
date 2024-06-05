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
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
int main() {
    int n,d;
    cin >> n;
    vector<int> a(n),l(n),r(n);
    rep(i,n) cin >> a[i];
    l[0] = a[0];
    rep3(i,1,n) l[i] = max(a[i],l[i-1]);
    r[n-1] = a[n-1];
    for(int i=n-2;i >-1; i--) r[i] = max(a[i],r[i+1]);

    cin >> d;
    rep(i,d){
        int left,right;
        cin >> left >> right;
        left--;right--;
        cout << max(l[left-1],r[right+1]) << endl;
    }
    return 0;
}