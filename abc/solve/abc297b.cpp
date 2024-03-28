#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s;
    cin>>s;
    vector<int> b_index,r_index;

    int n=s.size();
    rep(i,n){
        if(s[i]=='B'){
            b_index.push_back(i);
        }
        if(s[i]=='R') r_index.push_back(i);
    }


    bool jug1=false,jug2=false;
    if(b_index[0]%2!=b_index[1]%2) jug1=true;

    rep3(i,r_index[0],r_index[1]){
        if(s[i]=='K') jug2=true;
    }

    if(jug1 and jug2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}