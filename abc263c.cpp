#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<n;i++)

int n,m;
void output(vector<int> a){
    rep(i,n){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void f(vector<int> a){
    if(a.size()==n){
        output(a);
        return;
    }

    int sx=1;
    if(a.size()>0){
        sx=a.back()+1;
    }
    a.push_back(sx);
    while(a.back()<=m){
        f(a);
        a.back()++;
    }
}
int main(){
    cin>>n>>m;
    f({});
    return 0;
}