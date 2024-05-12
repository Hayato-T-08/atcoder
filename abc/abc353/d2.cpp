#include <bits/stdc++.h>
#include "atcoder/modint"

using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto &v : a) cin >> v;
  vector<int> d(11);
  for(int i = 0; i < n; i++) {
    d[to_string(a[i]).size()]++;
    //各桁数の個数を数える
  }
  mint res = 0;
  vector<mint> p10(11, 1);
  for(int i = 1; i <= 10; i++) p10[i] = p10[i - 1] * 10;//10^iを計算

  for(int i = 0; i < n; i++) {
    res += mint(a[i]) * i;
    d[to_string(a[i]).size()]--;//a[i]の桁数に該当する個数を減らす
    //上の部分でi<jかつlen(aj) = kなるjの個数dkを求めている
    for(int j = 1; j <= 10; j++) {
      res += p10[j] * a[i] * d[j];//a[i]の桁数に該当する個数をかける
    }
  }
  cout << res.val() << endl;
}
