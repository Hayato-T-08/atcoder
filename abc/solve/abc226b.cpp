#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> a(n);
    set<vector<int>> st;
    
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        for(int j=0;j<l;j++){
            int x;
            cin>>x;
            a[i].push_back(x);
        }
        st.insert(a[i]);
    }

    cout<<st.size()<<endl;
}