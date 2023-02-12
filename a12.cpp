#include <bits/stdc++.h>
using namespace std;
int N,K;
long long paper[100009];
int check(long long x){
    long long sum=0;
    for(int i=1;i<=N;i++){
        sum+=x/paper[i];
        
    }
    if(sum>=K){
        return 1;
    }else{
        return -1;
    }
}
int main(){
    
    cin>>N>>K;
    for(int i=1;i<=N;i++) cin>>paper[i];
    long long L,R;
    L=1;
    R=1000000000;
    

    while (L<R)
    {
        long long M;
        M=(L+R)/2;
        if(check(M)==-1){
            L=M+1;   
        }
        if(check(M)==1){
            R=M;
        }
            
        }
    
    
    cout<<L<<endl;
    


}