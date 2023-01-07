#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        
        ll p = 0, q = 0;
        for (ll i = 2; i * i * i <= n; i++) {
            if (n % i != 0) continue;
            if ((n / i) % i == 0) {
                p = i;
                q = n / i / i;
            } else {
                q = i;
                p = (ll) sqrt(n / i);
            }
            break;
        }
        cout << p << ' ' << q << endl;
    }
}