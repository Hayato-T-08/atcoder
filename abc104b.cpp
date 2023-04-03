#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s;
    cin>>s;
    if(s[0]!='A'){
        cout<<"WA"<<endl;
        return 0;
    }

    int idx=-1,cnt=0;

    rep3(i,2,s.size()-1){
        if(s[i]=='C'){
            idx=i;

            cnt++;
        }
    }
    if(cnt!=1){
        cout<<"WA"<<endl;
        return 0;
    }

    rep(i,s.size()){
        if(i==0 or i==idx) continue;
        if(s[i]<'a' or s[i]>'z'){
            cout<<"WA"<<endl;
            return 0;
        }
    }

    cout<<"AC"<<endl;
    return 0;
}