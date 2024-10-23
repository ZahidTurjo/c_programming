#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    
    long long int sum=(long long int) N*(N+1)/2;
    printf("%lld",sum);
}