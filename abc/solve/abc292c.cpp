#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long ans=0;
    

    for(int x=1;x<n;x++){
        int y=n-x;
        long long x_num=0,y_num=0;
        for(int i=1;i*i<=x;i++){
            if(x%i==0){
                x_num++;
                if(x!=i*i) x_num++;
            }
        }

        for(int j=1;j*j<=y;j++){
            if(y%j==0){
                y_num++;
                if(y!=j*j) y_num++;
            }
    }
    ans+=x_num*y_num;
}
cout<<ans<<endl;
}