#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int x,y;
    cin>>x>>y;
    bool jug=false;
    rep(i,x+1){
        int kame=i;
        int turu=x-i;
        if(kame*4+turu*2==y) jug=true;
    }
    jug ? cout<<"Yes"<<endl : cout<<"No"<<endl;
}