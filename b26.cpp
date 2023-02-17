#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<bool> del(n+1,false);
    for(int i=2;i*i<=n;i++){
        if(del[i]) continue;
        

        for(int j=i*2;j<=n;j+=i){
            del[j]=true;
        }
    }

    for(int i=2;i<=n;i++){
        if(!del[i]) cout<<i<<endl;
    }

}