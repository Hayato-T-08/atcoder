#include <bits/stdc++.h>
using namespace std;
int main(){
    long long x;
    int k;
    cin>>x>>k;
    for(int i=0;i<k;i++){
        long long s,t;
        s=x/pow(10,i);
        t=s%10;
        if(t>=5){
            s+=(10-t);
        }else{
            s-=t;
        }
        
        x=s*pow(10,i);
      
    }
    cout<<x<<endl;
}