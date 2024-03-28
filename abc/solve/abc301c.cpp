#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    string s,t;

    cin>>s>>t;
    sort(all(s));
    sort(all(t));

    if(s==t){
        cout<<"Yes"<<endl;
        return 0;
    }
    
    if(s.find('@')==string::npos and t.find('@')==string::npos and s!=t){
        cout<<"No"<<endl;
        return 0;
    }

    vector<int> s_c(26),t_c(26);
    int cnt_s=0,cnt_t=0;
    rep(i,s.size()) {
        if(s[i]=='@'){
            cnt_s++;
            continue;
        } 
        s_c[int(s[i])-int('a')]++;
    }

    rep(i,t.size()){
        if(t[i]=='@'){
            cnt_t++;
            continue;
        }
         t_c[int(t[i])-int('a')]++;
    }
    string res="atcoder";
    rep(i,26){
        if(res.find(char(int('a')+i))!=string::npos){
            if(s_c[i]>t_c[i]){
                cnt_t-=s_c[i]-t_c[i];
            }else if(s_c[i]<t_c[i]){
                cnt_s-=t_c[i]-s_c[i];
            }
        }else{
            if(s_c[i]!=t_c[i]){
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    if(cnt_s>=0 and cnt_t>=0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


}