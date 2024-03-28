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

    sort(all(a));
    int sum=0;
    for(int i=n-1;i>=1;i--){
        sum+=a[i]-a[i-1];
    }
    cout<<sum<<endl;
}