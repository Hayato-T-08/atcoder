#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#pragma GCC optimize ("-O3")
using namespace std; void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
int N, H, A[101010], B[101010];
//---------------------------------------------------------------------------------------------------
int solve() {
    int ma = 0;
    rep(i, 0, N) ma = max(ma, A[i]);
    vector<int> v;
    rep(i, 0, N) if (ma < B[i]) v.push_back(B[i]);
    sort(v.begin(), v.end(), greater<int>());

    int ans = 0;
    fore(x, v) {
        ans++;
        H -= x;
        if (H <= 0) return ans;
    }

    ans += (H + ma - 1) / ma;
    return ans;
}
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N >> H;
    rep(i, 0, N) cin >> A[i] >> B[i];
    cout << solve() << endl;
}