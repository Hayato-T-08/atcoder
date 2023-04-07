#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> l(n);
    rep(i,n) cin>>l[i];
    sort(all(l));
    int ans=0;
    for(int i=0;i<k;i++){
        ans+=l[n-i-1];
    }
    cout<<ans<<endl;

}