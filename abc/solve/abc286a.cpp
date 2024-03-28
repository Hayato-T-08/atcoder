#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,p,q,r,s;
    cin>>n>>p>>q>>r>>s;
    vector<int> a(n),b;
    rep(i,n) cin>>a[i];
    p--;
    q--;
    r--;
    s--;
    int div=r-p;
    for(int i=p;i<=q;i++){
        int tmp=a[div+i];
        a[div+i]=a[i];
        a[i]=tmp;
    }

    for(auto x:a) cout<<x<<" ";
    cout<<endl;

}