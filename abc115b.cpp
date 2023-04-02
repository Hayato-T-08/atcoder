#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<int> p(n);
    rep(i,n) cin>>p[i];
    sort(all(p));
    p[n-1]=p[n-1]/2;
    int sum=0;
    rep(i,n) sum+=p[i];
    cout<<sum<<endl;

}