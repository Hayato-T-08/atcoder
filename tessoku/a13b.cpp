#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<int> r(n,0);
    rep(i,n){
        cin >> a[i];
    }

    rep(i,n){
        if(i == 0){
            r[i] = 0;
        }else{
            r[i] = r[i-1];
        }
        while(a[r[i] + 1] <= a[i] + k && r[i] < n-1){
            r[i]++;
        }
    }
    
    ll ans = 0;
    rep(i,n){
        ans += r[i] - i;
    }

    cout << ans << endl;
}