#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    vector<bool> call(n+1,false);
    vector<int> ans;
    for(int i=1;i<=n;i++){
        if(!call[i]){
            call[a[i]]=true;
        }
    }
    for(int i=1;i<=n;i++){
        if(!call[i]){ 
            ans.push_back(i);
        }
        
    }
    cout<<ans.size()<<endl;
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;
}