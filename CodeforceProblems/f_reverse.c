#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=n-1,j=0;i>=0;i--,j++){
         b[j]=a[i];
    }
    for(int i =0;i<n;i++){
        printf("%d ",b[i]);
    }

}