#include <bits/stdc++.h>
using namespace std;
int main(){
    long long l;
    int n1,n2;
    cin>>l>>n1>>n2;
    vector<pair<long long,long long>> vl1(n1),vl2(n2);
    for(int i=0;i<n1;i++){
        cin>>vl1[i].first>>vl1[i].second;
    }

    for(int i=0;i<n2;i++){
        cin>>vl2[i].first>>vl2[i].second;
    }

    long long graid1=0,graid2=0,i=0,j=0,ans=0;;

    while(i<n1&&j<n2){
        if(vl1[i].first==vl2[j].first) ans+=min(graid1+vl1[i].second,graid2+vl2[j].second)-max(graid1,graid2);
        if(graid1+vl1[i].second<graid2+vl2[j].second){
            graid1+=vl1[i].second;
            i++;
        }else{
            graid2+=vl2[j].second;
            j++;
        }
    }

    cout<<ans<<endl;
}
