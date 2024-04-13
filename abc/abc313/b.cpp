#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> deg(N);

  for (int _ = 0; _ < M; _++) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    deg[b]++;
  }
  int ans = -1;
  for (int i = 0; i < N; i++) {
    if (deg[i] == 0) {
      if (ans != -1) {
        cout << -1 << endl;
        exit(0);
      } else {
        ans = i + 1;
      }
    }
  }
  cout << ans << endl;
}
