#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int> Map;
    vector<string> sn;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        Map[s]=0;
        sn.push_back(s);
    }
    for(int i=0;i<n;i++){

        if(Map[sn[i]]==0){
            cout<<sn[i]<<endl;
            Map[sn[i]]++;
        }else{
            cout<<sn[i]<<"("<<Map[sn[i]]<<")"<<endl;
            Map[sn[i]]++;
        }
        
    }
}