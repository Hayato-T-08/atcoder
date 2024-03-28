#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int N;
    cin >> N;
    int macnt = -1, ans = -1;
    rep3(x, 1, N + 1) {
        int cnt = 0;
        int y = x;
        while (y % 2 == 0) y /= 2, cnt++;
        if (macnt < cnt) macnt = cnt, ans = x;
    }
 
    cout << ans << endl;
}