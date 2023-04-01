#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];
    sort(all(a));
    rep(i,n){
        if(binary_search(all(a),a[i]-x)){
            cout<<"Yes"<<endl;
            return 0;
        }
    }

    cout<<"No"<<endl;
}