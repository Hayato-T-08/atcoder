#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    double ans,mul=1,sum=0;
    rep(i,n) mul*=a[i];
    rep(i,n){
        double mul2=1;
        rep(j,n){
            if(i==j) continue;
            else{
                mul2*=a[j];
            }
            
        }
        sum+=mul2;
    }
    ans=mul/sum;
    cout<<setprecision(16)<<ans<<endl;

}