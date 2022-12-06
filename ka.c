#include <stdio.h>
#include <math.h>
#define N 100
double a[N][N];
double b[N],x[N];
double r[N];
double p[N];
int main(void){
    int i,j,n;

    scanf("%d", &n);
    for(i=0;i<n;i++)for(j=0;j<n;j++)scanf("%lg",&a[i][j]);
    for(i=0;i<n;i++)scanf("%lg",&b[i]);

        for(i=0;i<n;i++){ 
            double z=0;
        for(j=0;j<n;j++){
            z+=a[i][j]*b[j];
        } 
        r[i]=z;
    }
        for(i=0;i<n;i++){
      p[i]=r[i]-b[i];
    }
    {for(i=0;i<n;i++) printf("%g ", p[i]);} printf("\n");
    return 0;
}