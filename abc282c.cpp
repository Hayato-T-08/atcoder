#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    int cnt=0;
    int k;
    vector<int> a;
    for(int i=0;i<n;i++){
        if(s[i]=='"'){
            a.push_back(i);
            cnt++;
        }
    }
    // for(auto x:a){
    //     cout<<x<<" ";
    // }
    k=int(cnt/2);

    for(int i=0;i<n;i++){
        if(s[i]==','){
            s[i]='.';
        }
    }
    for(int i=1;i<k+1;i++){
     
            for(int j=a[(2*i-1)-1];j<a[2*i-1];j++){
                if(s[j]=='.'){
                   // cout<<s[j]<<" ";
                    s[j]=',';
                }
            }
        
    }
    cout<<s<<endl;
}