#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int *p=&a;
    int *q=&b;
    int *r=&c;
    int max=*p;
    int min=*p;
    if(*p>*q && *p>*r){
        max=*p;
    }else if(*r>*q){
        max=*r;
    }else{
        max=*q;
    }
    if(*p<*q && *p<*r){
        min=*p;
    }else if(*r<*q){
        min=*r;
    }else{
        min=*q;
    }

    printf("%d %d",min,max);


}