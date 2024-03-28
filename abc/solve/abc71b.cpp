#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s;
    cin>>s;
    vector<bool> a(26,false);
    rep(i,s.size()){
        a[s[i]-'a']=true;
    }

    rep(i,26){
        if(!a[i]) {
            cout<<char(i+'a')<<endl;
            return 0;
        }
    }
    cout<<"None"<<endl;
    return 0;

}