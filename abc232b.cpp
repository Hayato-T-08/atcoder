#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    vector<int> sub;

    for(int i=0;i<26;i++){
        string s2=s;
        for(int j=0;j<(int) s.size();j++){
            s2[j] =((s2[j]-'a')+i)%26 + 'a';
        }
        if(s2==t){
            cout<<"Yes"<<endl;
            return 0;
        }
    }

    cout<<"No"<<endl;
    return 0;

}