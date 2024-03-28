#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int x;
    cin>>x;
    int a,b;
    a=x/500;
    int ans=0;
    ans+=a*1000;
    x-=a*500;
    b=x/5;
    ans+=b*5;
    cout<<ans<<endl;
}