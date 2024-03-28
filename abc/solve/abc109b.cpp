#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> word;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        word.push_back(x);
    }
    int check=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(word[i]==word[j]){
                check++;
            }
            if(word[i][word[i].size()-1]!=word[i+1][0]){
                check++;
            }
        }
    }
    if(check==0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

}