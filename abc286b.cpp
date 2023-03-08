#include <bits/stdc++.h>
#include <regex>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    string t;
    t=regex_replace(s,regex("na"),"nya");
    cout<<t<<endl;
}