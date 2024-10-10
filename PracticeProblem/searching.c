#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    long long int a[N];
    for(int i = 0;i<N;i++){
        scanf("%lld",&a[i]);
    }
    long long int X;
    scanf("%lld",&X);
    int z=0;
    for(int i =0;i<N;i++){
        if(X==a[i]){
            z=z+1;
            printf("%d",i);
        }
    }
    if(z==0){
        printf("-1");
    }

}