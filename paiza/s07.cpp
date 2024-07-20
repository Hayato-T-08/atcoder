#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    string tmp = "";
    stack<pair<long long,string>> st;
    map<char,long long> mp,ans;
    // string k = "abcdefghijklmnopqrstuvwxyz";
    // for(int i=0;i<26;i++){
    //     mp[k[i]] = 0;
    // }
    string tmp_char = "";
    string tmp_num = "";
    string  new_s = "";

    for(int i=0;i<n;i++){
        if(s[i] == '('){
            // cout << "tmp_num " << tmp_num << endl;
            if(tmp_num != "") st.push({stoll(tmp_num),""});
            tmp_num = "";
            tmp_char = "";
            // mp.clear();
        }else if(s[i] == ')'){
            auto[num,chars] = st.top();
            // cout << num << " " << chars << endl;
            for(int j=0;j<chars.size();j++){
                mp[chars[j]] *= num;
            }
            // cout << "q " << mp['q'] << endl;
            st.pop();
            tmp_char = "";
            // mp.clear();
        }else if(s[i] >= '0' && s[i] <= '9'){
            
            tmp_num += s[i];
        }else{
            
            if(tmp_num != ""){
                mp[s[i]] += stoll(tmp_num);
                tmp_num = "";
            }else{
                mp[s[i]]++;
            }
            tmp_char += s[i];
            vector<pair<long long,string>> tmp_st;
            while(!st.empty()){
                auto [num,chars] = st.top();
                string new_chars = chars + s[i];
                sort(new_chars.begin(),new_chars.end());
                new_chars.erase(unique(new_chars.begin(),new_chars.end()),new_chars.end());
                tmp_st.push_back({num,new_chars});
                
                // cout << num << " " << chars << endl;
                st.pop();
            }
            reverse(tmp_st.begin(),tmp_st.end());
            for(auto x:tmp_st){
                st.push(x);
            }
        }
    }
    for(int i=0;i<26;i++){
        cout << char('a' + i) << " " << mp['a'+i] << endl;
    }
    return 0;
}