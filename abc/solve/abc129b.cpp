#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<int> w(n);
    rep(i,n) cin>>w[i];


    int ans=1e5;
    rep(i,n){
        int sum1=0,sum2=0;
        rep(j,i+1){
            sum1+=w[j];
        }
        rep3(j,i+1,n) sum2+=w[j];
        ans = min(ans,abs(sum1-sum2));
    }
    cout<<ans<<endl;
}
