#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> h(n);
    rep(i,n) cin>>h[i];

    int cnt=0;
    rep(i,n){
        if(h[i]>=k) cnt++;
    }
    cout<<cnt<<endl;
}