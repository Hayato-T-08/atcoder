#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int main(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    Graph G(2*n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        G[a[i]-1].push_back(2*i-1);
        G[a[i]-1].push_back(2*i);
        G[2*i-1].push_back(a[i]-1);
        G[2*i].push_back(a[i]-1);
    }

        // BFS のためのデータ構造
    vector<int> dist(2*n+1, -1); // 全頂点を「未訪問」に初期化
    queue<int> que;

    // 初期条件 (頂点 0 を初期ノードとする)
    dist[0] = 0;
    que.push(0); // 0 を橙色頂点にする

    // BFS 開始 (キューが空になるまで探索を行う)
    while (!que.empty()) {
        int v = que.front(); // キューから先頭頂点を取り出す
        que.pop();

        // v から辿れる頂点をすべて調べる
        for (int nv : G[v]) {
            if (dist[nv] != -1) continue; // すでに発見済みの頂点は探索しない

            // 新たな白色頂点 nv について距離情報を更新してキューに追加する
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }

        // 結果出力 (各頂点の頂点 0 からの距離を見る)
    for (int v = 0; v < 2*n+1; ++v) cout<< dist[v] << endl;



}