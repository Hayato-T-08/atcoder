#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int w,a,b;
    cin>>w>>a>>b;

    if(abs(a-b)<=w){
        cout<<0<<endl;
    }else{
        cout<<abs(a-b)-w<<endl;
    }
}