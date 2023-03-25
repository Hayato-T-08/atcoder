#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<long long> a(n);
    rep(i,n) cin>>a[i];

    long long m=0,u=0,c=-1;
    rep(i,n) m+=abs(a[i]);
    rep(i,n) u+=a[i]*a[i];
    rep(i,n) c=max(c,abs(a[i]));
    cout<<m<<endl;
    cout<<setprecision(16)<<sqrt(u)<<endl;
    cout<<c<<endl;
}