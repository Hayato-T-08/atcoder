#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    long long t;
    cin>>n>>m>>t;
    vector<int> a(n+1);
    for(int i=1;i<n;i++) cin>>a[i];
    vector<int> bonus(n+1,0);
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        bonus[x]=y;
    }

    for(int i=1;i<n;i++){
        
        
        if(t<=a[i]){
            cout<<"No"<<endl;
            return 0;
        }
        t-=a[i];
        t+=bonus[i+1];


    }
     cout<<"Yes"<<endl;
  
}