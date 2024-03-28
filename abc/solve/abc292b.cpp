#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<vector<int>> jug(n+1,vector<int>(2,0));
    for(int i=0;i<q;i++){
        int num;
        cin>>num;
        if(num==1){
            int x;
            cin>>x;
            jug[x][0]++;
        }
        else if(num==2){
            int x;
            cin>>x;
            jug[x][1]++;
        }else{
            int x;
            cin>>x;
            if(jug[x][0]>=2||jug[x][1]>=1){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
}