#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
    string s;
    cin>>s;
    bool ans=false;

    for(int i=0;i<n;i++){
  
        if(s[i]=='R'&&s[i+1]=='L') ;
        else if(s[i]=='L'&&s[i+1]=='R') ans=true;
        else if(s[i]=='U'&&s[i+1]=='D') ans=true;
        else if(s[i]=='D'&&s[i+1]=='U') ans =true;
    }

    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}