#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s;
    cin >> s;
    int n = s.size();

    ll ans = 0;
    for(int i=0;i<(1<<(n-1));i++){
        ll sm = 0;
        ll a = s[0]-'0';
        for(int j=0;j<n-1;j++){
            if ( i & (1<<j)){
                sm += a;
                a = 0;
            }
            a = a*10 + s[j+1]-'0';
        }
        sm += a;
        ans += sm;
    }
    cout << ans << endl;
}