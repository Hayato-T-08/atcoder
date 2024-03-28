#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,x,cap=0;
    cin>>n;
    cin>>x;
    rep(i,n){
        double v,p;
        cin>>v>>p;
        cap+=v*p;
        if(cap>x*100){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}