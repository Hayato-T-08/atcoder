#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> a(100009);
    for(int i=1;i<=n;i++) cin>>a[i];
    vector<int> grundy(100009);
    
    for(int i=0;i<=100000;i++){
        vector<bool> trans(3,false);
        if(i>=x) trans[grundy[i-x]]=true;
        if(i>=y) trans[grundy[i-y]]=true;
        if(trans[0]==false) grundy[i]=0;
        else if(trans[1]==false) grundy[i]=1;
        else grundy[i]=2;
    }
    int xor_sum=0;
    for(int i=1;i<=n;i++) xor_sum^=grundy[a[i]];
    if(xor_sum!=0) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
}