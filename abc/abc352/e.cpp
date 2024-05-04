#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
using ll = long long;
using P = pair<int,ll>;
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

vector<P> edge;
vector<int> A,B,C;
int main() {
    int n,m;
    cin >> n >> m;
    dsu du(n);
    int cnt = 0;
    rep(i,m){
        int k,c;
        cin >> k >> c;
        vector<int> a(k);
        rep(j,k){
            cin >> a[j];
            a[j]--;
        }
        rep(j,k){
            rep3(l,j+1,k){
                cnt++;
                edge.push_back({c,cnt});
                A.push_back(a[j]);
                B.push_back(a[l]);
            }
        }
    }
    sort(edge.begin(),edge.end());
    ll ans = 0;
    rep(i,cnt){
        if(!du.same(A[edge[i].second],B[edge[i].second])){
            du.merge(A[edge[i].second],B[edge[i].second]);
            ans += edge[i].first;
        }
    }
    if(du.groups().size() == 1) cout << ans << endl;
    else cout << -1 << endl;
}