#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))

int main(){
    int r,d,x;
    
    cin>>r>>d>>x;
    int last=x;
    rep(i,10){
        cout<<last*r-d<<endl;
        last=last*r-d;
    }

}