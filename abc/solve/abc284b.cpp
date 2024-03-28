#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> a;
    for(int i=0;i<t;i++){
        int n;
        int cnt=0;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            if(x%2!=0){
                cnt++;
            }
        }
        a.push_back(cnt);
    }
    for(auto x:a){
        cout<<x<<endl;
    }
}