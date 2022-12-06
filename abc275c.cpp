#include<vector>
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    vector<vector<string>> a(9, vector<string> (9,"0"));
    vector<string> k;
    std::vector<std::string> v;
    std::string s = ",a,b,,c,";

    for(int i=0;i<9;i++){
        string s;
        cin>>s;
        k.push_back(s);   }
       

    for(int i=0;i<9;i++){
         int j=0;
        for(char s:k[i]){
            a[i][j]=s;
        }
    }

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<a[i][j]<<endl;
        }
    }
}
