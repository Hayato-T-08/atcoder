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
    int ans=0;
    rep(i,n){
        rep3(j,i+1,n){
            rep3(k,j+1,n){
                if(l[i]!=l[j] and l[i]!=l[k] and l[j]!=l[k] and l[i]+l[j]>l[k] and l[j]+l[k]>l[i] and l[k]+l[i]>l[j]){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
}