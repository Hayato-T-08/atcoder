#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    
    for(auto& x:a) cin>>x;

    b=a;
    sort(b.rbegin(),b.rend());

    int boo=b[1];


    for(int i=0;i<n;i++){
        if(boo==a[i]) {cout<<i+1<<endl;
        break;}
    }
}