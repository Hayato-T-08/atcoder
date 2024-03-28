#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> x(n);
    rep(i,n) cin>>x[i];
    int sum=0;
    rep(i,n){
        sum+=min(abs(x[i]-0)*2,abs(x[i]-k)*2);
    }
    cout<<sum<<endl;

}