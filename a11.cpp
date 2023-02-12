#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> num(n);
    for(int i=0;i<n;i++) cin>>num[i];
    int L,R;
    L=0;
    R=n-1;
    int M;
    int ans;
    while(true){
        M=int((L+R)/2);
        if(num[M]==x){
            ans=M;
            break;
        }
        else if(x<num[M]){
            R=M-1;
        }else{
            L=M+1;
        }

    }
    cout<<ans+1<<endl;
    
}