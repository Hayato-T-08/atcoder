#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<string> a;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        a.push_back(s);
    }
    vector<vector<bool>> num(n,vector<bool>(m,false));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='o'){
                num[i][j]=true;
            }
        }
    }
int cnt=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        bool jug=true;
        for(int k=0;k<m;k++){
            jug&=(num[i][k]||num[j][k]);
        }
        if(jug){
            cnt++;
        }
        }
    }

cout<<cnt<<endl;
}