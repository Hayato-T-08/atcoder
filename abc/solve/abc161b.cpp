#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    int cnt=0,sum=0;
    rep(i,n){
        sum+=a[i];
    }
   

    rep(i,n){
        if(a[i]*4*m>=sum) cnt++;
    }
    if(cnt>=m) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}