#include<iostream>
#include<map>

using namespace std;
using ll = long long;

map<ll,ll> fibomap;

ll fibonati(ll n){
    if(fibomap[n] != -1) return fibomap[n];
    if(n == 0) return 0;
    if(n==1) return 1;

    return fibomap[n] = fibonati(n-1) + fibonati(n-2);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        fibomap[i]=-1;
    }

    cout<<fibonati(n)<<endl;
}