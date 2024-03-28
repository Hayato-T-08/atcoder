#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s;
    cin>>s;
    int index1,index2;
    rep(i,s.size()) if(s[i]=='A') {index1=i;break;}

    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='Z') {index2=i;break;}
    }

    cout<<index2-index1+1<<endl;
}