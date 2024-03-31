#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int> s;
    vector<int> e;
    cin>>n;
    vector<int> j;//jyunnbann
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        s.push_back(a);
        e.push_back(b);
        j.push_back(i);
    }
    
    j.resize(n);

    sort(s.begin(), s.end(), [&e](size_t i1, size_t i2) {
        return e[i1] < e[i2];
    });
    // sort(e.begin(),e.end());
    vector<int> sh;
    int cnt=1;
    int fin=e[0];
    for(int i=1;i<n;i++){
        if(s[i]>=fin){
            fin=e[i];
            cnt++;
        }
    }
    cout<<cnt<<endl;
   for(int i=0;i<n;i++){
    cout<<s[i]<<" "<<e[i]<<endl;
   }
}