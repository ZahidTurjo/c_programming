#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i =0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int X;
    scanf("%d",&X);
    for(int i =0;i<N;i++){
        if(X== i+1){
            if(a[i]==0){
                a[i]=1;
            }else if(a[i]==1){
                a[i]=0;
            }
        }
    }

    for(int i =0;i<N;i++){
        printf("%d ",a[i]);
    }
}