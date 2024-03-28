#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    int a_point=0,b_point=0;
    for(int i= 0;i<n;i++){
        if((i+1)%2!=0) a_point+=a[i];
        else b_point+=a[i];
    }
    cout<<a_point-b_point<<endl;
}