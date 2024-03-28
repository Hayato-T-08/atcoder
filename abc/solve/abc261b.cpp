#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<char>> jug(n+1,vector<char>(n+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>jug[i][j];
        }
    }
    bool ans=true;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(jug[i][j]=='W'&&jug[j][i]!='L') ans=false;
            if(jug[i][j]=='L'&&jug[j][i]!='W') ans=false;
            if(jug[i][j]=='-'&&jug[j][i]!='-') ans=false;
        }
    }
    if(ans) cout<<"correct"<<endl;
    else cout<<"incorrect"<<endl;
}