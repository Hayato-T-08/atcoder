#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    t=s;
    reverse(s.begin(),s.end());
    if(t==s){
        cout<<"Yes"<<endl;
        return 0;
    }
    int a_idx=0;
    for(int i=0;i<int(s.size());i++){
        if(s[i]=='a') a_idx++;
        else break;
    }


    s.erase(0,a_idx);
    reverse(s.begin(),s.end());
    int a_idx2=0;;
    for(int i=0;i<int(s.size());i++){
        if(s[i]=='a') a_idx2++;
        else break;
    }
    if(a_idx<a_idx2) {
        cout<<"No"<<endl;
        return 0;
    }
    s.erase(0,a_idx2);
    t=s;
    reverse(s.begin(),s.end());
    if(s==t){
        cout<<"Yes"<<endl;
        return 0;
    }
    cout<<"No"<<endl;
    return 0;
}