#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<int> p;
vector<int> q;
bool search(int x){
    int l=1,r=n;
    while(l<=r){
        int m;
        m=(r+l)/2;
        if(q[m]==x) return true;
        if(x<q[m]) r=m-1;
        if(x>q[m]) l=m+1;

    }
    return false;
}
int main(){
    n=9;
    q.push_back(0);
    for(int i=0;i<9;i++){
        int x;
        cin>>x;
        q.push_back(x);
    }
    int y;
    cin>>y;
    cout<<search(y)<<endl;
}