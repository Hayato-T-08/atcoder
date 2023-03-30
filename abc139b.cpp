#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int ans=0,sum=1;
    int a,b;
    cin>>a>>b;
    while(b>sum){
        sum+=a;
        sum--;
        ans++;
    }
    cout<<ans<<endl;

}