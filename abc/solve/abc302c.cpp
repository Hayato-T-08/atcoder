#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n,m;
    cin>>n>>m;
    
    vector<string> s(n);
    rep(i,n) cin>>s[i];

    sort(all(s));
    do{
        bool jug=true;
        for(int i=0;i<n-1;i++){
            int cnt=0;
            rep(j,m){
                if(s[i][j]!=s[i+1][j]) cnt++;
            }
            if(cnt!=1) jug=false;
        }
        
        if(jug){
                cout<<"Yes"<<endl;
                return 0;
            }

    }while(next_permutation(all(s)));


    cout<<"No"<<endl;
    return 0;
    
}