#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
    cin>>h>>w;
    vector<vector<char>> map(h+1,vector<char>(w+1));
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cin>>map[i][j];
        }
    }

    vector<vector<bool>> visit(h+1,vector<bool>(w+1,false));
    int i=1,j=1;
    int lim=26000;
    int cnt=0;
    while(true){
        visit[i][j]=true;
        if(map[i][j]=='U'){
            if(i==1) break;
            i=i-1;
            if(visit[i][j]==true){
                cout<<-1<<endl;
                return 0;
            }
        }

        if(map[i][j]=='D'){
            if(i==h) break;
            i=i+1;
            if(visit[i][j]==true){
                cout<<-1<<endl;
                return 0;
            }
        }

        if(map[i][j]=='L'){
            if(j==1) break;
            j=j-1;
            if(visit[i][j]==true){
                cout<<-1<<endl;
                return 0;
            }           
        }

        if(map[i][j]=='R'){
            if(j==w) break;
            j=j+1;
            if(visit[i][j]==true){
                cout<<-1<<endl;
                return 0;
            }           
        }
    }

    cout<<i<<" "<<j<<endl;
    return 0;
}