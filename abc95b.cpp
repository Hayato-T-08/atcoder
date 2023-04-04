#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    int x;
    cin>>n>>x;
    vector<int> m(n);
    rep(i,n) cin>>m[i];

    sort(all(m));
    int sum=0,ans=n;
    
    rep(i,n) sum+=m[i]; 
    x=x-sum;
    ans+=x/m[0];
    cout<<ans<<endl;
    
}