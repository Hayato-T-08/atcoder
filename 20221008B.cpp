#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> pep(n,vector<int>(n));
    vector<vector<int>> dance(n);
    for (int i = 0; i < m; ++i) {
        int l;
        cin >> l;
        dance[i].resize(l);
        for (int j = 0; j < l; ++j) {
            cin >> dance[i][j];
        }
    }
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dance[i][j]==)
        }
    }
    }