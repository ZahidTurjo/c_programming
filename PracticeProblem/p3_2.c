#include<stdio.h>
int main()
{
    int n,m,x;
    scanf("%d %d %d",&n,&m,&x);
    int f[1005]={0};
    int a[n][m];
    int b[x];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            f[a[i][j]]+=1;
        }
    }
   for(int i=0;i<x;i++){
       scanf("%d",&b[i]);
   }
   for(int i=0;i<x;i++){
    printf("%d\n",f[b[i]]);
   }
  

}