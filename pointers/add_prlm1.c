#include<stdio.h>
int main()
{
    int a,b;
  
    scanf("%d %d",&a,&b);

    int *p=&a;
    int *q=&b;
    printf("%d",*p+*q);
}