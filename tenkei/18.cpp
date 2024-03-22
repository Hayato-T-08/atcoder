#define _USE_MATH_DEFINES
#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
#define rep(i, n) for (int i = 0; i < (n); i++)

double convert_to_deg(double rad) {
  return rad / M_PI * 180.0;
}

int main() {
  double T, L, X, Y;
  cin >> T >> L >> X >> Y;
  int Q;
  cin >> Q;
  vi E(Q);
  rep(i, Q) cin >> E.at(i);
  
  const double r = L / 2.0;
  rep(i, Q) {
    double arg = 2.0 * M_PI * E.at(i) / T;
    double diff_x = abs(X), diff_y = abs(Y + r * sin(arg));
    double diff_xy = sqrt(diff_x * diff_x + diff_y * diff_y);
    double diff_z = r * (1.0 - cos(arg));
    double ans = convert_to_deg(atan2(diff_z, diff_xy));
    cout << fixed << setprecision(12) << ans << endl;
  }
}