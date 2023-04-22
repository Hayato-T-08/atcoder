#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    string s;
    cin>>n>>s;

    int index1,index2;
    rep(i,n){
        if(s[i]=='|') {index1=i;
        break;}
    }

    rep(i,n){
        if(i==index1) continue;
        if(s[i]=='|') index2=i;
    }

    rep3(i,index1,index2+1){
        if(s[i]=='*'){
            cout<<"in"<<endl;
            return 0;
        }
    }

    cout<<"out"<<endl;
    return 0;
}