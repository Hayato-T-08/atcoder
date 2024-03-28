#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    ll t;
    cin>>t;
    bool tin=false;
    vector<pair<ll,ll>> cr(n);
    rep(i,n) cin>>cr[i].first;
    rep(i,n) cin>>cr[i].second;


    rep(i,n){
        if(cr[i].first==t) tin=true;
    }

  
    int ans;
    if(tin){
        ll max=-1;
        rep(i,n){
            if(cr[i].first==t){
                if(cr[i].second>max){
                    max=cr[i].second;
                    ans=i+1;
                }
            }
        }
       
    }else{
        int color=cr[0].first;
        ll max=cr[0].second;
        ans=1;
        rep(i,n){
            if(cr[i].first==color){
                if(cr[i].second>max){
                    max=cr[i].second;
                    ans=i+1;
                }
            }
        }
        
    }

    cout<<ans<<endl;
}