#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,ans=0;
    cin>>n;
    rep3(i,1,n+1){
        if (1 <= i and i <= 9) ans++;
        else if (100 <= i and i <= 999) ans++;
        else if (10000 <= i and i <= 99999) ans++;
    }
    cout<<ans<<endl;;
}