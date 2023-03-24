#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,s,d;
    cin>>n>>s>>d;
    long long ans=0;

    rep(i,n){
        int x,y;
        cin>>x>>y;

        if(x<s&&y>d) ans+=y;
    }

    if(ans==0) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}