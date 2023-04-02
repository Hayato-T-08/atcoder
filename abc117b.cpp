#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    vector<int> l(n);
    rep(i,n) cin>>l[i];
    sort(all(l));
    int max=l[n-1];
    int sum=0;
    rep(i,n-1) sum+=l[i];
    if(max<sum) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}