#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<int> p(n),s(n);
    rep(i,n) cin>>p[i];
    s=p;
    sort(all(s));
    int cnt=0;
    rep(i,n) if(s[i]!=p[i]) cnt++;
    if(cnt<=2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}