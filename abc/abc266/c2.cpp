#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

struct V {
  int x, y;
  V(int x=0, int y=0): x(x), y(y) {}
  V operator-(const V& a) const {
    return V(x-a.x, y-a.y);//ベクトルA-Bを求める
  }
  int cross(const V& a) const {
    return x*a.y - y*a.x;//外積を求める
  }
  int ccw(const V& a) const {
    int area = cross(a);
    if (area > 0) return +1; // ccw 反時計回り 符号付面積が正の場合
    if (area < 0) return -1; // cw　時計回り 符号付面積が負の場合
    return 0; // 直線上にある
  }
};

int main() {
  vector<V> p(4);//4つの座標を持つ配列
  rep(i,4) cin >> p[i].x >> p[i].y;
  rep(i,4) {
    V A = p[i];
    V B = p[(i+1)%4];//ABC,BCD,CDA,DAB
    V C = p[(i+2)%4];//各内角においてベクトルを用いて
    V b = B-A, c = C-A;//AB,ACベクトル
    if (b.ccw(c) != 1) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}