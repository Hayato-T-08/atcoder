#include <bits/stdc++.h>
using namespace std;
int func(int n){
    if(n==1) return 1;
    return func(n-1)*n;
}
int main(){
    int n;
    int x;
    cin>>n>>x;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(i%2!=0) sum--;
    }

    sum<=x ? cout<<"Yes"<<endl : cout<<"No"<<endl;
}