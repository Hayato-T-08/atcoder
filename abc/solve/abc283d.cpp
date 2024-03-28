#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int jug_good_string(string s,int j,int i){
    string s1;

for(int k=j;k<i;k++){
    if(!isalpha(s[k])){
        s1=s1+s[k];
    }
}
int cnt1=0;
int cnt2=0;
for(int k=j;k<i;k++){
    if(s1[k]=='('){
        cnt1++;
    }
    else if (s1[k]==')'){
        cnt2++;
    }
    if()
}
}

    int main(){
    string s;
    cin>>s;
    vector<char> box;
    int jug=0;
    jug_good_string(s,0,s.size());
    for(int i=0;i<int(s.size());i++){
        if(isalpha(s[i])){
            if(find(box.begin(),box.end(),s[i])==box.end()){
                break;
            }
            box.push_back(s[i]);
            jug++;

        }

    }

}