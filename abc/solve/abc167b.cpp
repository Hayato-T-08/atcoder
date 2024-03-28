#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    ll a,b,c,k;
    cin>>a>>b>>c>>k;

    if(k<=a) cout<<k<<endl;
    else if(k<=a+b) cout<<a<<endl;
    else cout<<a-(k-(a+b))<<endl;

    
}