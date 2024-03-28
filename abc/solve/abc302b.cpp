#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) begin(x),end(x)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
int main(){
    int h,w;
    cin>>h>>w;

    vector<vector<char>> s(h,vector<char>(w));

    rep(i,h)rep(j,w) cin>>s[i][j];

    string ans,ans_r;
    ans="snuke";
    ans_r="ekuns";

    for(int i=0;i<h;i++){
        for(int j=0;j<w-4;j++){
            string s1="";

            s1+=s[i][j];
            s1+=s[i][j+1];
            s1+=s[i][j+2];
            s1+=s[i][j+3];
            s1+=s[i][j+4];

            if(s1==ans){
                rep(k,5){
                    cout<<i+1<<" "<<j+k+1<<endl;
                }
                return 0;
            }
            if(s1==ans_r){
                for(int k=4;k>=0;k--){
                    cout<<i+1<<" "<<k+j+1<<endl;
                    
                }
                return 0;
            }
        }
    }

    for(int j=0;j<w;j++){
        for(int i=0;i<h-4;i++){
            string s1="";

            s1+=s[i][j];
            s1+=s[i+1][j];
            s1+=s[i+2][j];
            s1+=s[i+3][j];
            s1+=s[i+4][j];

 
            if(s1==ans){
                rep(k,5){
                    cout<<i+1+k<<" "<<j+1<<endl;
                }
                return 0;
            }
            if(s1==ans_r){
                for(int k=4;k>=0;k--){
                    cout<<i+1+k<<" "<<j+1<<endl;
                    
                }
                return 0;
            }
        }


    }

    for(int i=0;i<h-4;i++){
        for(int j=0;j<w-4;j++){
            string s1="";

            s1+=s[i][j];
            s1+=s[i+1][j+1];
            s1+=s[i+2][j+2];
            s1+=s[i+3][j+3];
            s1+=s[i+4][j+4];

   
            if(s1==ans){
                rep(k,5){
                    cout<<i+1+k<<" "<<j+1+k<<endl;
                }
                return 0;
            }
            if(s1==ans_r){
                for(int k=4;k>=0;k--){
                    cout<<i+1+k<<" "<<k+1+j<<endl;
                    
                }
                return 0;
            }
        }
    }

    
    for(int i=h-1;i>=h-1-(h-4-1);i--){
        for(int j=0;j<w-4;j++){
            string s1="";

            s1+=s[i][j];
            s1+=s[i-1][j+1];
            s1+=s[i-2][j+2];
            s1+=s[i-3][j+3];
            s1+=s[i-4][j+4];

  
            if(s1==ans){
                rep(k,5){
                    cout<<i+1-k<<" "<<j+1+k<<endl;
                }
                return 0;
            }
            if(s1==ans_r){
                for(int k=4;k>=0;k--){
                    cout<<i+1-k<<" "<<k+1+j<<endl;
                    
                }
                return 0;
            }
        }
    }
}