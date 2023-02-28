#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    set<int> card;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        if(x==1){
            int y;
            cin>>y;
            card.insert(y);
        }else if(x==2){
            int y;
            cin>>y;
            card.erase(y);
        }else{
            int y;
            cin>>y;
            auto itr=card.lower_bound(y);
            if(itr==card.end()) cout<<-1<<endl;
            else cout<<(*itr)<<endl;
        }
    }
}