#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    vector<bool> use(n,false);
    for(auto& x:a) cin>>x;
    for(auto& x:b) cin>>x;
    bool ans=true;
    for(int i=0;i<m;i++){
        bool jug=false;
        for(int j=0;j<n;j++){
            if(a[j]==b[i]&&use[j]==false){
                jug=true;
                use[j]=true;
                break;
            }
        }
        ans&=jug;
    }

    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}