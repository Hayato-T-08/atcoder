#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ans;
    for(int i=0;i<int(s.size());i++){
        if(s[i]>='A'&&s[i]<='Z') ans=i+1;
    }
    cout<<ans<<endl;
}