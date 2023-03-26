#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    cin>>n;
    int cnt=0;
    bool flag=false;
    rep(i,n){
        int d1,d2;
        cin>>d1>>d2;
        if(d1==d2) cnt++;
        if(cnt==3) flag=true;
        if(d1!=d2) cnt=0;
    }

    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}