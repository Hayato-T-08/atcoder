#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    ll a,b;
    cin>>a>>b;

    if(a%b==0){
        cout<<a/b<<endl;
    }else{
        cout<<a/b+1<<endl;
    }
}