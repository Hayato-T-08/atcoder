#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector<vector<int>> b(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> b[i][j];
        }
    }
    vector<vector<bool>> a(n, vector<bool>(n, false));
    vector<int> c(k);
    for(int i=0;i<k;i++){
        cin >> c[i];
    }
    int cnt = 0;
    a[n/2][n/2] = true;
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            for(int l=0;l<n;l++){
                if(b[j][l] == c[i]){
                    a[j][l] = true;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        bool judge = true;
        for(int j=0;j<n;j++){
            if(a[i][j] == false){
                judge = false;
                break;
            }
        }
        if(judge){
            cnt++;
        }
    }

    for(int i=0;i<n;i++){
        bool judge = true;
        for(int j=0;j<n;j++){
            if(a[j][i] == false){
                judge = false;
                break;
            }
        }
        if(judge){
            cnt++;
        }
    }

    bool judge = true;
    for(int i=0;i<n;i++){
        if(a[i][i] == false){
            judge = false;
            break;
        }
    }
    if(judge){
        cnt++;
    }
    judge = true;
    for(int i=0;i<n;i++){
        if(a[i][n-1-i] == false){
            judge = false;
            break;
        }
    }
    if(judge){
        cnt++;
    }
    cout << cnt << endl;
}