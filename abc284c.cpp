#include <iostream>
#include <vector>
using namespace std;

// Union-Find
struct UnionFind {
    vector<int> par, rank, siz;

    // 構造体の初期化
    UnionFind(int n) : par(n,-1), rank(n,0), siz(n,1) { }

    // 根を求める
    int root(int x) {
        if (par[x]==-1) return x; // x が根の場合は x を返す
        else return par[x] = root(par[x]); // 経路圧縮
    }

    // x と y が同じグループに属するか (= 根が一致するか)
    bool issame(int x, int y) {
        return root(x)==root(y);
    }

    // x を含むグループと y を含むグループを併合する
    bool unite(int x, int y) {
        int rx = root(x), ry = root(y); // x 側と y 側の根を取得する
        if (rx==ry) return false; // すでに同じグループのときは何もしない
        // union by rank
        if (rank[rx]<rank[ry]) swap(rx, ry); // ry 側の rank が小さくなるようにする
        par[ry] = rx; // ry を rx の子とする
        if (rank[rx]==rank[ry]) rank[rx]++; // rx 側の rank を調整する
        siz[rx] += siz[ry]; // rx 側の siz を調整する
        return true;
    }

    // x を含む根付き木のサイズを求める
    int size(int x) {
        return siz[root(x)];
    }
};

int main() {
    // 頂点数と辺数の入力
    int N, M;
    cin >> N >> M;

    // 要素数 N の Union-Find を用意する
    UnionFind uf(N);

    // 各辺 (a, b) に対して unite(a, b) を実行
    for (int i = 0; i < M; ++i) {
        // 辺 (a, b) の入力
        int a, b;
        cin >> a >> b;

        // unite
        uf.unite(a, b);
    }

    // 根の個数を数える
    int result = 0;
    for (int v = 0; v < N; ++v) {
        if (uf.root(v) == v) {
            ++result;
        }
    }
    cout << result << endl;
}