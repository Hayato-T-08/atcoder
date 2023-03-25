#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<double> x(n),y(n);
    rep(i,n) cin>>x[i]>>y[i];
    int ans=0;
    rep(i,n)rep3(j,i+1,n){
        double a=(y[i]-y[j])/(x[i]-x[j]);
        if(a>=-1 and a<=1) ans++;
    }
    cout<<ans<<endl;
}