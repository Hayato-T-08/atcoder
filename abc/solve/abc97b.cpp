#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int X;
        cin >> X;
 
    int ans = 1;
    rep3(b, 2, X) {
        int x = b * b;
        while (x <= X) {
            ans = max(ans, x);
            x *= b;
        }
    }
    cout << ans << endl;


}