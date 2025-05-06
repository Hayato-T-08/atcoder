#include <bits/stdc++.h>
using namespace std;

// Union-Find木の実装
class UnionFind
{
private:
    vector<int> parent, rank;

public:
    UnionFind(int n)
    {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    int find(int x)
    {
        if (parent[x] == x)
            return x;
        return parent[x] = find(parent[x]);
    }

    void unite(int x, int y)
    {
        x = find(x);
        y = find(y);
        if (x == y)
            return;

        if (rank[x] < rank[y])
        {
            parent[x] = y;
        }
        else
        {
            parent[y] = x;
            if (rank[x] == rank[y])
                rank[x]++;
        }
    }

    bool same(int x, int y)
    {
        return find(x) == find(y);
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    // 辺の情報を格納する配列 {コスト, 頂点1, 頂点2}
    vector<tuple<int, int, int>> edges(m);
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        a--;
        b--; // 0-indexedに変換
        edges[i] = {c, a, b};
    }

    // コストの昇順にソート
    sort(edges.begin(), edges.end());

    UnionFind uf(n);
    long long ans = 0;

    // Kruskalのアルゴリズム
    for (auto [cost, a, b] : edges)
    {
        if (!uf.same(a, b))
        {
            uf.unite(a, b);
            ans += cost;
        }
    }

    cout << ans << endl;
    return 0;
}
