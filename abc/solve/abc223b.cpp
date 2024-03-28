#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    set<string> st;
    for(int i=0;i<n;i++){
        char tmp=s[n-1];
        for(int j=n-1;j>=1;j--){
            s[j]=s[j-1];
        }
        s[0]=tmp;
        st.insert(s);
    }
    auto itr1=st.begin();
    auto itr2=st.end();
    itr2--;
    cout<<*itr1<<endl;
    cout<<*itr2<<endl;
}