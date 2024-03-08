#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,k;
    cin >> n >> k;
    vector<ll> a(n+1);
    vector<ll> sum(n+1,0);

    rep3(i,1,n+1){
        cin >> a[i];
    }

    rep3(i,1,n+1){
        sum[i] = sum[i-1] + a[i];
    }

    vector<ll> r(n+1,0);

    rep3(i,1, n+1){
        if(i == 1){
            r[i] = 1;
        }else {
            r[i] = r[i-1];
        }

        while(sum[r[i]] <= sum[i-1] + k && r[i] <= n){
            r[i]++;
        }
    }

    ll ans = 0;
    rep(i,n+1){
        ans += r[i] - i;
    }

    cout << ans << endl;
}