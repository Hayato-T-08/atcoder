#include <bits/stdc++.h>
using namespace std;

class union_find_tree {
    unordered_map<int, int> parent;
    unordered_map<int, int> rank;

public:
    union_find_tree(vector<int> values) {
      for(int i = 0; i < values.size(); i++) {
        parent[values[i]] = values[i];
        rank[values[i]] = 0;
      }
    }
  
    int find(int x) {
      if (parent[x] == x) return x;
      int root = find(parent[x]);
      parent[x] = root;
      return root;
    }

    void unite(int x, int y) {
      x = find(x);
      y = find(y);
      if (x == y) return;
      if (rank[x] > rank[y]) {
        parent[y] = x;
      } else {
        parent[x] = y;
        if (rank[x] == rank[y]) rank[y]++;
      }
    }

    bool same(int x, int y) {
      return find(x) == find(y);
    }
};

int main() {
  auto tree = new union_find_tree({1,2,3,4,5,6});
  tree->unite(2, 3);
  tree->unite(1, 2);
  tree->unite(4, 5);
  tree->unite(5, 6);
  cout << tree->same(2, 5) << endl; // 0
  tree->unite(2, 5);
  cout << tree->same(2, 5) << endl; // 1
}
