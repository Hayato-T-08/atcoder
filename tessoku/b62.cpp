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
Graph G;
vector<bool> seen;
stack<int> st,ans;
int n,m;
void dfs(int v){
    if(v == n){
        ans = st;
        return;
    }
    seen[v] = true;

    for(auto next_v : G[v]){
        if(seen[next_v]) continue;
        st.push(next_v);
        dfs(next_v);
        st.pop();
    }
    return;  
}
int main() {
    cin >> n >> m;
    G.resize(n+1);
    seen.resize(n+1,false);
    st.push(1);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    dfs(1);
    vector<int> output;
    while(!ans.empty()){
        output.push_back(ans.top());
        ans.pop();
    }
    reverse(output.begin(),output.end());
    rep(i,output.size()){
        cout << output[i];
        if(i != output.size() - 1) cout << " ";
    }
    return 0;
}