#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    n=n-1;
    int index;
    scanf("%d",&index);
    for(int i =index;i<n;i++){
        a[i]=a[i+1];
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}