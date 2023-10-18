#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    ll n;
    cin>>n;
    if(n<=1e3-1) cout<<n<<endl;
    else if(n>=1e3 and n<=1e4-1) cout<<n/10*10<<endl;
    else if(n>=1e4 and n<=1e5-1) cout<<n/100*100<<endl;
    else if(n>=1e5 and n<=1e6-1) cout<<n/1000*1000<<endl;
    else if(n>=1e6 and n<=1e7-1) cout<<n/10000*10000<<endl;
    else if(n>=1e7 and n<=1e8-1) cout<<n/100000*100000<<endl;
    else if(n>=1e8 and n<=1e9-1) cout<<n/1000000*1000000<<endl;
}