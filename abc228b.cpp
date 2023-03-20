#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    set<int> st;
    while(true){
        st.insert(x);
        x=a[x];
        if(st.count(x)) break;
    }
    cout<<st.size()<<endl;
}