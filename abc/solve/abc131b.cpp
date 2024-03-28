#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }
int main(){
    int N,L;
	cin >> N >> L;

	int mi = 1e6, mi_i = -1;
	rep3(i, 1, N + 1) if (chmin(mi, abs(L + i - 1))) mi_i = i;

	int ans = 0;
	rep3(i, 1, N + 1) if (i != mi_i) ans += L + i - 1;
	cout << ans << endl;


}