#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    long long t;
    int n;
    cin>>n>>t;
    vector<long long> a;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        a.push_back(x);
    }
    long long sum=0;
    for(auto x:a){
        sum+=x;
    }
    cout<<sum;
    long long  r;
    r=t%sum;
    
    // cout<<n<<" "<<t<<endl;
    // for(auto x:a){
    //     cout<<x<<endl;
    // }
    long long tmp=r;
    int idx=0;
    int jug=0;
    while(jug==0){
        for(int i=0;i<n;i++){
            tmp-=a[i];
            if(tmp<0){
                tmp+=a[i];
                idx=i+1;
                jug=1;
                break;
            }
        }
    }
    cout<<idx<<" "<<tmp<<endl;
}