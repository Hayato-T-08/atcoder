#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int n;
    int q;
    cin>>n>>q;
    vector<set<int>> st(n+1);
    vector<map<int,int>> mp(n+1);
    map<int,set<int>> jug;
    rep(k,q){
        int x;
        cin>>x;
        if(x==1){
            int i,j;
            cin>>i>>j;
            st[j].insert(i);
            mp[j][i]++;
            jug[i].insert(j);
        }else if(x==2){
            int i;
            cin>>i;
            for(auto x:st[i]){
                for(int j=0;j<mp[i][x];j++){
                    cout<<x<<" ";
                }
            }
            cout<<endl;
        }else{
            int i;
            cin>>i;
            for(auto x:jug[i]){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
}