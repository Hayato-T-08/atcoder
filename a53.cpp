#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    priority_queue<int,vector<int>,greater<int>> qu;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        if(x==1){
            int y;
            cin>>y;
            qu.push(y);
        }else if(x==2){
            cout<<qu.top()<<endl;
        }
        else{
            qu.pop();
        }
    }
}