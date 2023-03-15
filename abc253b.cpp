#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
    cin>>h>>w;
    vector<pair<int,int>> a;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            char s;
            cin>>s;
            if(s=='o'){
                a.push_back(make_pair(i,j));
            }
        }
    }
    cout<<abs(a[0].first-a[1].first)+abs(a[0].second-a[1].second)<<endl;
}