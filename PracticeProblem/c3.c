#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int min=a[0];
    int max_count=0;
    int min_count=0;
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
            max_count+=1;
        }
        if(min>a[i]){
            min=a[i];
            min_count+=1;
        }

    }

    printf("%d %d",max_count,min_count);

}