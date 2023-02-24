#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int x1=x,y1=y;
vector<pair<int,int>> xy;
    while(true){
        if(x1==1&&y1==1) break;
        xy.push_back(make_pair(x1,y1));
        if(x1>y1){
            x1-=y1;

        }else{
            y1-=x1;

        }
    }
int k=xy.size();
reverse(xy.begin(),xy.end());
    cout<<k<<endl;
    for(int i=0;i<k;i++){
        cout<<xy[i].first<<" "<<xy[i].second<<endl;
    }

}