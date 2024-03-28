#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    vector<int> a(3);
    rep(i,3) cin>>a[i];
    sort(all(a));
    int k;
    cin>>k;
    rep(i,k){
        a[2]*=2;
    }
    cout<<a[0]+a[1]+a[2]<<endl;

}