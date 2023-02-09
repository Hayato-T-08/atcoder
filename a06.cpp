#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> num;
    vector<int> a;
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        num.push_back(sum);
    }
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        cout<<num[r]-num[l-1]<<endl;
    }
}