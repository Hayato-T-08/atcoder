#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
    cin>>h>>w;
    vector<string> s(h),t(h),st(w),tt(w);
    
    for(int i=0;i<h;i++) cin>>s[i];
    for(int i=0;i<h;i++) cin>>t[i];

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            st[j].push_back(s[i][j]);
            tt[j].push_back(t[i][j]);
        }
    }

    sort(st.begin(),st.end());
    sort(tt.begin(),tt.end());
    if(st==tt) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}