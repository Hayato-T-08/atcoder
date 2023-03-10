#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<vector<int>> l(n+1);
    for(int i=1;i<=n;i++){
        int l_size;
        cin>>l_size;
        for(int j=0;j<l_size;j++){
            int x;
            cin>>x;
            l[i].push_back(x);
        }
    }
    for(int i=0;i<q;i++){
        int s,t;
        cin>>s>>t;
        cout<<l[s][t-1]<<endl;
    }
}