#include<stdio.h>
int main()
{
    int T;
    scanf("%d\n",&T);
    for(int i=1;i<=T;i++){
        int N;
        unsigned long long int fact=1;
        scanf("%d\n",&N);
        for(int i =1;i<=N;i++){
            fact=fact*i;
        }
        printf("%llu\n",fact);
    }
}