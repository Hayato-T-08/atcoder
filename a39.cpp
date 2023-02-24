#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> lr(n+1);
    for(int i=1;i<=n;i++) cin>>lr[i].first>>lr[i].second;
    sort(lr.begin(),lr.end(),[](const auto& lhs,const auto& rhs){ return lhs.second<rhs.second;});
    //for(int i=1;i<=n;i++) cout<<lr[i].first<<" "<<lr[i].second<<endl;
    int ans=1;
    int fin;
    fin=lr[1].second;
    for(int i=2;i<=n;i++){
        if(fin<=lr[i].first){
            fin=lr[i].second;
            ans++;
        }
    }
    cout<<ans<<endl;
}