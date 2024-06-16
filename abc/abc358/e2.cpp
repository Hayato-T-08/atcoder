#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

#include <atcoder/all>
using namespace atcoder;

constexpr ll mod = 998244353;
using mint = static_modint<mod>;

vector<mint> fac, inv, facinv;//階乗、逆元、階乗の逆元

void modcalc(int n = 3000) {
	fac.resize(n); inv.resize(n); facinv.resize(n);
	fac[0] = 1; fac[1] = 1; inv[1] = 1;
	facinv[0] = 1; facinv[1] = 1;
	for (ll i = 2; i < n; i++) {
		fac[i] = fac[i - 1] * i;//階乗計算
		inv[i] = -inv[mod % i] * (mod / i);//逆元計算 拡張ユークリッドの互除法
		facinv[i] = facinv[i - 1] * inv[i];//階乗の逆元計算
	}
}

mint comb(int n, int k) {
	if (n < 0 || k < 0 || n < k) return 0;//無効な値
	return fac[n] * facinv[k] * facinv[n - k];//nCk = n! / (k!(n-k)!)割り算は逆元の掛け算
}

int main() {
	modcalc();
	int k;
	cin >> k;
	vector<int> c(26);
	rep(i, 26) cin >> c[i];
	vector<vector<mint>> dp(27, vector<mint>(k + 1));
	dp[0][0] = 1;
	rep(i, 26) {
		rep(j, k + 1) {
			rep(l, min(j, c[i]) + 1) dp[i + 1][j] += dp[i][j - l] * comb(j, l);
		}
	}
	mint ans = 0;
	for (int j = 1; j <= k; j++) ans += dp[26][j];
	cout << ans.val() << '\n';
}