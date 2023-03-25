#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,x;
    cin>>n>>x;
    string s;
    cin>>s;

    rep(i,s.size()){
        if(s[i]=='o'){
            x++;
        }else{
            x--;
            x=max(x,0);
        }
    }
    cout<<x<<endl;
}