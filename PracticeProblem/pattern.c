#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i =1;i<=N;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
  printf(" ");
    for(int i=N;i>1;i--){
        for(int j=0;j<=N-i;j++){
            printf(" ");
        }
        for(int k=1;k<i;k++){
            printf("%d",k);
        }
        printf("\n");
    }
}