#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);   
    int a[n+5];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int f[9]={0};
    for(int i=0;i<n;i++){
         f[a[i]]=1;
    }
    int sum=0;
    for(int i=0;i<=9;i++){
        sum=sum+f[i];
        printf("%d ",f[i]);
    }
   printf("\n%d",sum);
}