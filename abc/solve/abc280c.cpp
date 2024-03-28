#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int cnt=0;
    int idx;
    int jug=-1;
    while(cnt<int(s.size())){
        if(s[cnt]!=t[cnt]){
            idx=cnt+1;
            jug=0;
            break;
        }
        cnt++;
    }
    if(jug==-1){
        idx=t.size();
    }
    cout<<idx<<endl;
}