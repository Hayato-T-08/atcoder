#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> f(string a,string b){
    vector<string> errors;
    int min = 1113;
    int c;
    bool flag_b = false;
    if(b == ""){
        errors.push_back("給与額は必須項目です");
        flag_b = true;
    }else{
        c = stoi(b);
    }

    if(a == "") errors.push_back("給与形態は必須項目です");
    if(a != "2" && a != "1") errors.push_back("給与形態は1,2のいずれかを指定してください");

    if(a == "1"){
        if(min > c) errors.push_back("給与額が最低賃金を下回っています");
    }
    else if(a == "2"){
        if(min * 160 > c) errors.push_back("給与額が最低賃金を下回っています");
    }


    return errors;
}

int main(){

}