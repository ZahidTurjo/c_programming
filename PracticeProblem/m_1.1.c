#include<stdio.h>
int main()
{
   int N;
   int K;
   scanf("%d %d",&N,&K);
   for(int i =0;i<N;i++){
    for(int j=1;j<=K;j++){
        printf("%d ",j);
    }
    printf("\n");
   }
}