#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n),a1(n);
    rep(i,n) cin>>a[i];

    int sum=0;
    rep(i,n) {
        sum+=a[i];
        a1[i]=sum;
    }

    rep(i,q){
        int l,r;
        cin>>l>>r;
        cout<<a1[r-1]-a1[l-2]<<endl;
    }
}