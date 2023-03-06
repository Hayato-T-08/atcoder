#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int ans=0;
    for(int i=1;i<=n;i++){
        int tmp=i;
        int sum=0;
        while (tmp!=0)
        {
            sum+=tmp%10;
            tmp=int(tmp/10);
        }
        if(sum>=a&&sum<=b){
            ans+=i;
        }
    }
    cout<<ans<<endl;
}