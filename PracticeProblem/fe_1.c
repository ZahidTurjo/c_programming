#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);

        for(int j=1;j<=x;j++){
            printf("%d ",j);
        }
        for(int j=x-1;j>0;j--){
            printf("%d ",j);
        }
    }
}