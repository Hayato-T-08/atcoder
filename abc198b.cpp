#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s;
    cin>>s;
    rep(i,10){
        string t=s;
        reverse(all(t));
        if(t==s){
            cout<<"Yes"<<endl;
            return 0;
        }

        s="0"+s;

    }

    cout<<"No"<<endl;
    return 0;
}