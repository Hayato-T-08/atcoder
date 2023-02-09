#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t>>n;
    vector<int> num(t+1,0);
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        num[l]++;
        num[r]--;
    }
    vector<int> sum(t+1,0);
    sum[0]=num[0];
    cout<<sum[0]<<endl;
    for(int i=1;i<t;i++){
        sum[i]=sum[i-1]+num[i];
        cout<<sum[i]<<endl;
    }
}