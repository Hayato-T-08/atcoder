/* pivoting つき lu 分解と連立一次方程式解法 */
#include <stdio.h>
#include <math.h>

#define N 200
int lu(int n, double a[][N], int p[]){
  int i,j,k,kmax,l; double pv,t;
  for(i=0;i<n;i++) p[i]=i;    /* 行の入れ替えを示す配列の初期化   */
  for(k=0;k<n;k++){           /* 枢軸選択つき反復先頭             */
    kmax=k; pv=fabs(a[k][k]); /* 枢軸候補の行番号をkmaxに記憶.　　*/
    for(i=k+1;i<n;i++) if((t=fabs(a[i][k]))>pv){ pv=t; kmax=i;}
    if(kmax!=k){              /* 第k行と第kmax行の入れ替え        */
      { l=p[kmax]; p[kmax]=p[k]; p[k]=l; } /* p[kmax]と p[k]の入れ替え*/
      for(j=0;j<n;j++){  /* a[kmax][j] と a[k][j] (j=0,...,n-1)の入れ替え */
        t=a[kmax][j]; a[kmax][j]=a[k][j]; a[k][j]=t;
      }
    }
    if(pv<1e-16) return 0; /* 行列 a が正則でないとみなし戻り値0で終了 */
    /*** LU 分解本体 *******************/
    for(i=k+1;i<n;i++){
      a[i][k]=a[i][k]/a[k][k];
      for(j=k+1;j<n;j++) a[i][j]=a[i][j]-a[i][k]*a[k][j];
    }
  }
  return 1; /* LU分解できたので戻り値1 */
}



void solve(int n,double a[][N],double b[],double x[],int p[]){
    int i,j,r; double s;
    r=lu(n,a,p);         /* 行列 a が LU 分解できれば r == 1 となる*/
    if(r==0) { printf("Can't solve\n"); return; }
    for(i=0;i<n;i++){    /* 前進消去 Ly=Pb */
        s=b[p[i]];
        for(j=0;j<i;j++) s=s-a[i][j]*x[j];
        x[i]=s;          /* y_i の値を x[i] に保存 */
    }
    for(i=n-1;i>=0;i--){ /* 後退代入 Ux=y */
      s=x[i];            /* s=y_i         */
        for(j=i+1;j<n;j++) s=s-a[i][j]*x[j];
        x[i]=s/a[i][i];
    }
}

double zansa(int n,double a[][N],double b[],double x[]){
  double ans;//戻り値
  double ax[N]; //axの行列
  int i,j;
  double cnt=0;
  double r[N];
    for(i=0;i<n;i++){ 
      double z=0;
      for(j=0;j<n;j++){
        z+=a[i][j]*x[j];
      } 
      ax[i]=z;
    }//a*xを計算
  
    for(i=0;i<n;i++){
      r[i]=b[i]-ax[i];
    }//rの値を計算
    
    for(i=0;i<n;i++){
      cnt+=pow(r[i],2);
    }//rの二乗のわを計算
    ans = sqrt(cnt);
//rの二乗の平方根を計算
  return ans;
}

double a[N][N];
double b[N],x[N];
int p[N];

int main(){
    int i,j,n;
    double r_norm;
    scanf("%d", &n);
    for(i=0;i<n;i++)for(j=0;j<n;j++)scanf("%lg",&a[i][j]);
    for(i=0;i<n;i++)scanf("%lg",&b[i]);

    solve(n,a,b,x,p);
    {for(i=0;i<n;i++) printf("%23.17g", x[i]);} printf("\n");

    r_norm=zansa(n,a,b,x);
    printf("%10.4g\n",r_norm);

    return 0;
}
