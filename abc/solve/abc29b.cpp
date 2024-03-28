#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    vector<string> s(12);
    rep(i,12) cin>>s[i];

    int cnt=0;
    rep(i,12){
        if(s[i].find('r')!=string::npos) cnt++;
    }

    cout<<cnt<<endl;
}