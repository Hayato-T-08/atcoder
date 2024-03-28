#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;

#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int q;
    cin>>q;
    ll ans=1;
    deque<int> s(1,1);
    rep(i,q){
        int jug;
        cin>>jug;
        if(jug==1){
            int x;
            cin>>x;
            s.push_back(x);
            ans*=10;
            ans+=x;

        }else if(jug==2){
            ans-=pow(10,s.size())*s.front();
            s.pop_front()
        }else{
            ans%=998244353;
            if(ans<0) ans+=998244353;
            cout<<ans<<endl;
        }
    }
}