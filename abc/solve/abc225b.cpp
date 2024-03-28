#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> deg(n);
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        deg[a]++;
        deg[b]++;
    }
    int d1=0,d2=0;
    for(int i=0;i<n;i++){
        if(deg[i]==1) d1++;
        if(deg[i]==n-1) d2++;
    }
    if(d1==n-1&&d2==1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


}