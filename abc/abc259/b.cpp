#define _USE_MATH_DEFINES
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
const int inf = 1e9;
const int mod = 1e9+7;
const ll linf = 1e18;
double convert_to_rad(double deg) {
	return deg * M_PI / 180.0;
}
int main() {
    double a,b,d;
    cin >> a >> b >> d;
    double rad1 = atan2(b,a);
    double dis = sqrt(a*a + b*b);
    double rad2 = convert_to_rad(d);
    cout << fixed << setprecision(16) << dis*cos(rad1+rad2) << " " << dis*sin(rad1+rad2) << endl;
    return 0;
}