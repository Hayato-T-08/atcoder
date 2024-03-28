#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,q;
    cin>>n>>q;
    vector<int> l(q),r(q),t(q),a(n,0);
    rep(i,q) {
        cin>>l[i];
        l[i]--;
        cin>>r[i];
        cin>>t[i];
        }

    rep(i,q){
        rep3(j,l[i],r[i]){
            a[j] = t[i];
        }
    }

    rep(i,n){
        cout<<a[i]<<endl;
    }
}