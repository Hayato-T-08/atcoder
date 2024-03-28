#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string first,middle,end;
    first=s[0];
    middle=s.substr(1,s.length()-2);
    end=s[s.length()-1];
    cout<<first<<" "<<middle<<" "<<end<<endl;
}
