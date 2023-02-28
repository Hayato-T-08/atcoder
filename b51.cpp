#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<pair<int,int>> ans;
    string s;
    cin>>s;
    vector<pair<int,int>> ch;
    for(int i=0;i<int(s.size());i++){
        if(s[i]=='('){
            ans.push(make_pair(i+1,0));
        }else{
            ans.top().second=i+1;
            pair<int,int> k;
            k=ans.top();
            cout<<k.first<<" "<<k.second<<endl;
            ans.pop();

        }
    }
}