#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    long long ans=0;
    rep(i,n){
        long long a,b;
        cin>>a>>b;
        ans+=(b-a+1)*(a+b)/2;
    }
    cout<<ans<<endl;
}