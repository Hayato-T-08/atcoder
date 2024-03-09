#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x), end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
int main()
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    vector<int> b(n);
    vector<int> dp(n, 0);

    rep(i,n)
    {
        cin >> a[i];
    }

    rep3(i,2,n){
        cin >> b[i];
    }

    dp[1] = a[1];

    rep3(i,2,n){
        dp[i] = min(dp[i-1] + a[i], dp[i-2] + b[i]);
    }

    cout << dp[n-1] << endl;
}