#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    long long int sum=0;
    scanf("%d",&n);
    int *a=(int*)malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    for(int i=0;i<n;i++){
       printf("arrry::: %d ",*(a+i));
       }


    printf("%d",sum);
    free(a);

}