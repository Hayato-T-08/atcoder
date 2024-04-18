#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll INF = 1'000'000'000'000'000'000;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];
    vector dp(n, vector(2, vector(2, INF)));
    dp[0][0][s[0] - '0'] = 0;
    dp[0][0][(s[0] - '0') ^ 1] = c[0];
    for (int i = 1; i < n; i++) {
        int r = s[i] - '0';
        for (int k = 0; k < 2; k++) {
            dp[i][0][k] = dp[i - 1][0][k ^ 1] + (r == k ? 0 : c[i]);
            dp[i][1][k] = min(dp[i - 1][0][k], dp[i - 1][1][k ^ 1]) + (r == k ? 0 : c[i]);
        }
    }
    ll ans = min(dp[n - 1][1][0], dp[n - 1][1][1]);
    cout << ans << '\n';
}
