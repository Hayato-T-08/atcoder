#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int w;
    cin>>w;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    int ans=0;
    set<int> val;
    for(int i=0;i<n;i++){
        if(!val.count(a[i])&&a[i]<=w){
            val.insert(a[i]);
            ans++;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){        
            if(!val.count(a[i]+a[j])&&(a[i]+a[j])<=w){
                    val.insert(a[i]+a[j]);
                    ans++;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){   
            for(int k=j+1;k<n;k++){             
                if(!val.count(a[i]+a[j]+a[k])&&(a[i]+a[j]+a[k])<=w){
                    val.insert(a[i]+a[j]+a[k]);
                    ans++;
                }
            }
        }
    }

    cout<<ans<<endl;

}