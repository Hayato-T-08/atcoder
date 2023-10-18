#include<iostream>
#include<vector>
#include<map>
using namespace std;
using ll = long long;
int cnt=0;
map<ll,ll> fibo;
ll fibonati(int n){
    cnt++;
    if(fibo[n]!= -1) return fibo[n];
    if(n==0){
        fibo[0]=0;
        return 0;
    }
    if(n==1){
        fibo[1]=1;
        return 1;
    }

    return fibo[n] = fibonati(n-1) + fibonati(n-2);
}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        fibo[i]=-1;
    }

    cout<<fibonati(n)<<endl;
    cout<<cnt<<endl;
}