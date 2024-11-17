#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int *p=&a;
    int *q=&b;
    int diff=*p-*q;
    if(diff<0){
        printf("%d",diff*-1);
    }else{
        printf("%d",diff);
    }
}