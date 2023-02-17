#include <bits/stdc++.h>
using namespace std;
int main(){
    long long ans=0;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        char c;
        int a;
        cin>>c>>a;
        if(c=='+') ans+=a;
        if(c=='-') ans-=a;
        if(c=='*') ans*=a;
        if(ans<0) ans+=10000;
        ans=ans%10000;
        cout<<ans<<endl;
    }
    
}