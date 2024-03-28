#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int h,w;
    cin>>h>>w;
    vector<string> grid(h);
    for(int i=0;i<h;i++){
        cin>>grid[i];
    }

    vector<int> ans(w);
    for(int i=0;i<h;i++){

        for(int j=0;j<w;j++){
            if(grid[i][j] == '#'){
                ans[j]++;
            }
        }
 
    }
    for(int i=0;i<w-1;i++){
        cout<<ans[i]<<" ";
    }
    cout<<ans[w-1]<<endl;

}