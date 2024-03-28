#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> s(3),t={ "ABC" , "ARC" , "AGC" , "AHC" };
    for(int i=0;i<3;i++) cin>>s[i];
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    string ans;
    for(int i=0;i<4;i++){
        bool flag=false;
        for(int j=0;j<3;j++){
            if(t[i]==s[j]){
                flag=true;
                break;
            }
        }
        if(!flag) ans=t[i];
    }

    cout<<ans<<endl;
}