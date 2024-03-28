#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,k;
    cin>>n>>k;
    int minv=1000;
    rep(i,(1<<n)){
        int val=1;
        rep(j,n){
            if(i&(1<<j)) val*=2;
            else val+=k;
        }
        minv=min(val,minv);
    }
    cout<<minv<<endl;
}