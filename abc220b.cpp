#include <bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    string a,b;
    cin>>a>>b;
    long long a_k=0,b_k=0;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    for(int i=0;i<int(a.size());i++){
        a_k+=pow(k,i)*int(a[i]-'0');
        
    }

    for(int i=0;i<int(b.size());i++){
        b_k+=pow(k,i)*int(b[i]-'0');
    }

    cout<<a_k*b_k<<endl;
}