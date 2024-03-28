#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
map<int,ll> mp;
ll f(int n){
    if(mp[n]!=0) return mp[n];
    if(n==0){
        mp[n]=2;
        return 2;
    }
    if(n==1) {
        mp[n]=1;
        return 1;
        }
    ll ans=f(n-1)+f(n-2);
    mp[n]=ans;
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<f(n)<<endl;
}