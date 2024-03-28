#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,m,c;
    cin>>n>>m>>c;
    vector<int> b(m);
    rep(i,m) cin>>b[i];
    vector<vector<int>> a(n,vector<int>(m));

    rep(i,n)rep(j,m) cin>>a[i][j];
    int ans=0;
    rep(i,n){
        int sum=0;
        rep(j,m) sum+=b[j]*a[i][j];
        sum+=c;
        if(sum>0) ans++;
    }
    cout<<ans<<endl;
}