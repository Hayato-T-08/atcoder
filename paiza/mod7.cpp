#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> cnt(7,0);
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        cnt[a%7]++;
    }
    
    long long ans = 0;
    for(int i=0;i<7;i++){
        for(int j = i+1;j<7;j++){
            for(int k = j+1;k<7;k++){
                if((i+j+k)%7 == 0){
                    ans += (long long)cnt[i]*cnt[j]*cnt[k];
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}