#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    rep(i,200){
        if(a<=0) {cout<<"No"<<endl;
        break;}
        if(c<=0) {cout<<"Yes"<<endl;
        break;}
        if(i%2==0) c-=b;
        else a-=d;
    }
}