#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<int> p(n);
    rep(i,n) cin>>p[i];
    int ans=0;
    rep3(i,0,n-2){
        if((p[i]<p[i+1] and p[i+1]<p[i+2])or(p[i]>p[i+1] and p[i+1]>p[i+2])) ans++;
    }
    cout<<ans<<endl;
}