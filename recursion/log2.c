#include<stdio.h>
long long log_2(long long n){
    // base case
    if(n <=1){
        return 0;
    }
    return 1+log_2(n/2);
}
int main()
{
    long long n;
    scanf("%lld",&n);
   long long ans=log_2(n);
   printf("%lld",ans);
}