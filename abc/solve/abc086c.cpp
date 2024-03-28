#include <bits/stdc++.h>
using namespace std;
int n,t[101010],x[101010],y[101010];
string slove(){
    int pt=0,px=0,py=0;
    for(int i=0;i<n;i++){
        int d=abs(px-x[i])+abs(py-y[i]);
        int dt=t[i]-pt;
        if(dt<d) return "No";
        if((dt-d)%2==1) return "No";
        pt=t[i];
        px=x[i];
        py=y[i];
    }
    return "Yes";
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>t[i]>>x[i]>>y[i];

    cout<<slove()<<endl;
}