#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    
    ll X;
    ll x = 100;
    cin >> X;
    int ans = 0;
    while (x < X) {
        x = x + x / 100;
        ans++;
    }
    cout << ans << endl;
}