#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i =1,k=1;i<=n;i++,k+=2){
        for(int z=n;z>i;z--){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
        printf("\n");
    }

      for (int i =n,k=2*n;i>0;i--,k=k-2){
        for(int z=n;z>i;z--){
            printf(" ");
        }
        for(int j=k;j>1;j--){
            printf("*");
        }
        printf("\n");
    }
    
}