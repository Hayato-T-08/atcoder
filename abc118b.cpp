#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,m;
    cin>>n>>m;
    vector<set<int>> a(n);
    vector<bool> b(31,false);
    rep(i,n){
        int k;
        cin>>k;
        rep(j,k){
        int x;
        cin>>x;
        a[i].insert(x);
    }
}
int ans=0;
rep3(i,1,31){
    bool jug=true;
    rep(j,n){
        jug&=a[j].count(i);
    }
    if(jug) ans++;
}
cout<<ans<<endl;
}