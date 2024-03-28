#include <bits/stdc++.h>
using namespace std;
class Point{

    public:
        int x;
        int y;

        double distance(double x2,double y2){
            double dis=(x-x2)*(x-x2)+(y-y2)*(y-y2);
            return dis;
        }
};

int main(){
    int n;
    cin>>n;
    vector<Point> xy(n);
    for(int i=0;i<n;i++){
        cin>>xy[i].x>>xy[i].y;
    }

    double max_dis=-1;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            else{
                max_dis=max(max_dis,xy[i].distance(xy[j].x,xy[j].y));
            }
        }
    }

    cout<<setprecision(18)<<sqrt(max_dis)<<endl;
}