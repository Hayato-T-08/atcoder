#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    vector<int> num(q);
    for(int i=0;i<q;i++) cin>>num[i];

    for(int i=0;i<q;i++){
        bool ans=false;
        for(int j=2;j<=sqrt(num[i]);j++){
            if(num[i]%j==0){
                ans=true;
            }
        }
        if(!ans) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}