#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
#define rep3(i, m, n) for (int i = (int)(m); i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
int main()
{
    ll n;
    cin >> n;
    vector<mint> a(n+1);
    a[1] = 1;
    a[2] = 1;
    rep3(i,3,n+1){
        a[i] = a[i-1] + a[i-2];
    }

    cout << a[n].val() << endl;
    return 0;
}