#include<stdio.h>
int main(){
    int a[4]={1,2,3,4};
    int *p;
    p=a+3;
    *p=5;
    printf("%d",a[3]);
}