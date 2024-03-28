#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    vector<int> xi(n),yi(m);
    for(auto& a:xi) cin>>a;
    for(auto &b:yi) cin>>b;

    rep3(i,x+1,y+1){
        bool jug1=true,jug2=true;
        for(auto a:xi){
            jug1&=(a<i);
         
        }

        for(auto b:yi){
            jug2&=(b>=i);
     
        }

        if(jug1 and jug2){
            cout<<"No War"<<endl;
            return 0;
        }
    }

    cout<<"War"<<endl;
    return 0;

}