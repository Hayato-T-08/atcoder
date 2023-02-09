#include <bits/stdc++.h>
using namespace std;
int main(){
    int d,n;
    cin>>d>>n;
    vector<int> p(d+1,0);
    vector<int> sum(d+1,0);
    p[0]=-10;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        p[l]++;
        p[r+1]--;
        
    }
    sum[1]=p[1];
    cout<<sum[1]<<endl;
    for(int i=2;i<=d;i++){
        sum[i]=sum[i-1]+p[i];
        cout<<sum[i]<<endl;
    }
    
}