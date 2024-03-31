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
    int n1,n2,m;
    cin >> n1 >> n2 >> m;
    Graph G(n1+n2);
    rep(i,m){
        int x,y;
        cin >> x >> y;
        x--; y--;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    queue<int> q;
    vector<int> dist1(n1+n2,-1),dist2(n1+n2,-1);
    dist1[0] = 0;
    q.push(0);
    while(!q.empty()){
        int v = q.front(); q.pop();
        for(auto nv : G[v]){
            if(dist1[nv] != -1) continue;
            dist1[nv] = dist1[v] + 1;
            q.push(nv);
        }
    }
    dist2[n1+n2-1] = 0;
    q.push(n1+n2-1);
    while(!q.empty()){
        int v = q.front(); q.pop();
        for(auto nv : G[v]){
            if(dist2[nv] != -1) continue;
            dist2[nv] = dist2[v] + 1;
            q.push(nv);
        }
    }


    sort(dist1.begin(),dist1.end());
    sort(dist2.begin(),dist2.end());
    cout << dist1[n1+n2-1] + dist2[n1+n2-1] + 1 << endl;
    return 0;
}