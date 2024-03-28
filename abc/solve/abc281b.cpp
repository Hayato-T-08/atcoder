#include<iostream>
#include<vector>
#include<string>

using namespace std;
bool check_alpha(char s){
    bool flag1,flag2;
    flag1=false;
    flag2=false;
    if(isalpha(s)){
        flag1=true;
    }
    if(s>='A' && s<='Z'){
        flag2=true;
    }
    bool flag=false;
    flag=flag1&&flag2;
    return flag;
    
}
bool check_int(string s){
    bool flag1,flag2;
    flag1=true;
    for(int i=0;i<int(s.length());i++){
        flag1&=isdigit(s[i]);
    }
    if(s.length()!=6){
        flag1=false;
    }
    flag2=false;
    if(flag1){
        int num=atoi(s.c_str());
        if(num>=100000&&num<= 999999){
            flag2=true;
        }


    }else{
        return false;
    }
    
    return flag1&&flag2;

}
int main(){
    string s;
    cin>>s;
    char first,end;
    string middle;
    first=s[0];
    middle=s.substr(1,s.length()-2);
    end=s[s.length()-1];
    // cout<<first<<" "<<middle<<" "<<end<<endl;
    // cout<<check_alpha(first)<<endl;
    // cout<<check_int(middle)<<endl;
    bool flag=false;
    flag=check_alpha(first)&&check_int(middle)&&check_alpha(end);
    if(flag){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

}