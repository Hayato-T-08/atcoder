#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    ll n,k;
    cin>>n>>k;
    rep(i,k){
   
        if(n%200==0) n/=200;
        else{
            n=n*1000+200;
        }
    }

    cout<<n<<endl;
}