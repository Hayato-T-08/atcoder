#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum;
    cin>>n>>sum;
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int z=sum-i-j;
            if(z>=1&&z<=n){
                cnt++;
            }
        }
    }
    cout<<cnt;
}