#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int cnt=0;
    rep3(i,0,101){
        if((i>=a and i<=b) and (i>=c and i<=d)) cnt++;
    }
    cout<<max(cnt-1,0)<<endl;
}