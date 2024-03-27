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
vector<ll> calc_divisors(long long N) {
    // 答えを表す集合
    vector<ll> res;

    // 各整数 i が N の約数かどうかを調べる
    for (ll i = 1; i * i <= N; ++i) {
        // i が N の約数でない場合はスキップ
        if (N % i != 0) continue;

        // i は約数である
        res.push_back(i);

        // N ÷ i も約数である (重複に注意)
        if (N / i != i) res.push_back(N / i);
    }

    // 約数を小さい順に並び替えて出力
    sort(res.begin(), res.end());
    return res;
}
int main() {
    ll k;
    cin >> k;
    vector<ll> divisors = calc_divisors(k);
    ll ans = 0;
    rep(i,divisors.size()){
        rep3(j,i,divisors.size()){
            if((k/divisors[i]) < divisors[j]) continue;
            if(k%(divisors[i] * divisors[j]) !=0) continue;
            if(divisors[j]<= k/(divisors[i]*divisors[j])){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}