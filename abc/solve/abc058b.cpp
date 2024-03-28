#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string o,e,ans;
    cin>>o>>e;
    int n=e.size();
    if(n-o.size()==0){
        rep(i,n){
        ans+=o[i];
        ans+=e[i];
    }
    }else{
        rep(i,n){
            ans+=o[i];
            ans+=e[i];
        }
        ans+=o[n];
    }
    cout<<ans<<endl;

}