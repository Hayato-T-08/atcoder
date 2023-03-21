#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    long long ans=1ll<<60;

    for(int i=0;i<n;i++){

        long long fee=a*i;
        

        for(int k=0;k<n/2;k++){
            if(s[n-k-1]!=s[k]) fee+=b;
        }
        ans=min(ans,fee);

        s=s.substr(1)+s[0];
    }
    cout<<ans<<endl;

}