#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int *a=(int *)malloc(n *sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(*(a+i)<0){
            a[i]=2;
        }else if(*(a+i)>0){
            a[i]=1;
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",*(a+i));
    }
}