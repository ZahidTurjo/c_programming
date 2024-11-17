#include<stdio.h>
int f[100005]={0};
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        f[a[i]]+=1;

    }
    for(int i=0;i<100005;i++){
       if(f[i]==1){
        count+=1;
       }
    }
    printf("%d",count);

}