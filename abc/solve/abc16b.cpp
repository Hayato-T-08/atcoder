#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c and a-b==c){
        cout<<'?'<<endl;
    }else if(a+b==c){
        cout<<"+"<<endl;
    }else if(a-b==c){
        cout<<"-"<<endl;
    }else{
        cout<<'!'<<endl;
    }
}