#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int jug;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            jug=i;
            break;
        }
    }

    if(jug%2==0) cout<<"Takahashi"<<endl;
    else cout<<"Aoki"<<endl;
}