#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<bool>> ans(n+1,vector<bool>(n+1));

    for(int i=0;i<m;i++){
        int k;
        cin>>k;
        vector<int> q;
        for(int i=0;i<k;i++) {
            int x;
            cin>>x;
            q.push_back(x);
        }
        for(int i=0;i<k;i++){
            for(int j=0;j<k;j++){
                if(i==j) continue;
                else{
                    ans[q[i]][q[j]]=true;
                }
            }
        }
    }
    bool answer=true;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j) answer&=ans[i][j];
        }
    }
    if(answer) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;



}