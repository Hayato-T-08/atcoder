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
    Graph G(n+1);
    rep1(i,n-1){
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    queue<int> que;
    vector<int> dist(n+1,-1);
    dist[1] = 0;
    que.push(1);
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(int nv : G[v]){
            if(dist[nv] != -1) continue;
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }

    int max_dist = -1;
    int max_v = -1;
    rep1(i,n){
        if(dist[i] > max_dist){
            max_dist = dist[i];
            max_v = i;
        }
    }
    dist.assign(n+1,-1);
    dist[max_v] = 0;
    que.push(max_v);
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(int nv : G[v]){
            if(dist[nv] != -1) continue;
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }

    sort(dist.begin(),dist.end());
    cout << dist[n] + 1 << endl;
    return 0;
}