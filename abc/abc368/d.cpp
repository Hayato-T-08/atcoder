#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    // グラフの構築
    vector<set<int>> edge(N);
    for (int i = 0; i < N - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        edge[a].insert(b);
        edge[b].insert(a);
    }

    // 目標頂点の集合
    set<int> V;
    for (int i = 0; i < K; i++)
    {
        int v;
        cin >> v;
        v--;
        V.insert(v);
    }

    // 次数が1の頂点をキューに入れる
    queue<int> q;
    for (int i = 0; i < N; i++)
    {
        if (edge[i].size() == 1)
        {
            q.push(i);
        }
    }

    int ans = N;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();

        // 目標頂点は削除しない
        if (V.count(v))
            continue;

        // 隣接頂点を取得
        int vv = *edge[v].begin();

        // 辺を削除
        edge[v].erase(vv);
        edge[vv].erase(v);

        ans--;

        // 隣接頂点の次数が1になったらキューに追加
        if (edge[vv].size() == 1)
        {
            q.push(vv);
        }
    }

    cout << ans << endl;
}
