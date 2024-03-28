#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int h1,w1,h2,w2;
    cin>>h1>>w1>>h2>>w2;
    if(h1==h2){
        cout<<"YES"<<endl;
    }else if(h1==w2){
        cout<<"YES"<<endl;
    }else if(h2==w1){
        cout<<"YES"<<endl;
    
    }
    else if(w1==w2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}