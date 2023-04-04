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
    int ans=0;
    
    rep3(i,1,n){
        string x=s.substr(0,i);
        string y=s.substr(i);
        sort(all(x));
        sort(all(y));
        x.erase(unique(x.begin(), x.end()), x.end());
        y.erase(unique(y.begin(), y.end()), y.end());

        int size=0;
        rep(i,x.size()){
            if(y.find(x[i])!=string::npos){
                size++;
            }
        }

        ans=max(ans,size);
    }

    cout<<ans<<endl;
}