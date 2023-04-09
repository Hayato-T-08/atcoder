#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    ll a,b;
    cin>>a>>b;
    ll cnt=0;
    if(a==b){
        cout<<0<<endl;
        return 0;
    }

    while (a!=0 and b!=0)
    {
      
        if(a>b){
            cnt+=a/b;
            a=a%b;
        }
        else if(a<b){
            cnt+=b/a;
            b=b%a;
        }
    }
    cout<<cnt-1<<endl;
}