#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s;
    cin>>s;
    int n=s.size();
    bool ans=true;
    rep(i,n){
        if(i%2==0){
            ans&=(s[i]>='a'&&s[i]<='z');
        }else{
            ans&=(s[i]>='A'&&s[i]<='Z');
        }
    }

    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}