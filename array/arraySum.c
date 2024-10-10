#include<stdio.h>
int main()
{
    long long int N;
    scanf("%lld",&N);
    long long int a[N];
    long long int sum=0;
    for(int i =0;i<N;i++){
        scanf("%lld",&a[i]);
    }
    for(int i =0;i<N;i++){
        sum=sum+a[i];

    }
    if(sum<0){
        printf("%lld",sum*-1);
    }else{

    printf("%lld",sum);
    }
}