#include <bits/stdc++.h>
using namespace std;
bool my_compare(pair<int, int> a, pair<int, int> b) {
    // 基本はfirstで比較
    if(a.first != b.first){
        // return a.first < b.first; // 昇順
        return a.first > b.first; // 降順
    }

    // それ以外はsecondで比較
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        // どちらも同じ
        return true;
    }
}
int main(){
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    vector<pair<int,int>> a(n),b(n),c(n);
    vector<bool> pass(n,false);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i]=make_pair(x,i);
    }

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
    b[i]=make_pair(x,i);
    }
    for(int i=0;i<n;i++){
        c[i]=make_pair(a[i].first+b[i].first,i);
    }
    sort(a.begin(),a.end(),my_compare);
 
   

    for(int i=0;i<x;i++){
        pass[a[i].second]=true;
    }
    
    sort(b.begin(),b.end(),my_compare);
   
    int cnt=0;
    for(int i=0;i<n;i++){
        if(cnt==y) break;
        if(pass[b[i].second]!=true){
            pass[b[i].second]=true;
            cnt++;
        }
    }

    sort(c.begin(),c.end(),my_compare);

    cnt=0;
    for(int i=0;i<n;i++){
        if(cnt==z) break;
        if(pass[c[i].second]!=true){
            pass[c[i].second]=true;
            cnt++;
        }
    }

    for(int i=0;i<n;i++){
        if(pass[i]) cout<<i+1<<endl;
    }

}