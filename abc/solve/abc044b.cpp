#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string w;
    cin>>w;

    vector<int> cnt(26);
    bool ans=true;
    rep(i,w.size()){
        int ind=w[i]-'a';
        cnt[ind]++;
    }

    rep(i,26){
        ans&=cnt[i]%2==0;
    }

    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}