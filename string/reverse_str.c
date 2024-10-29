#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="12345";
    char b[10];
    for(int  i =0;a[i]!=0;i++){
        b[i]=a[strlen(a)-(i+1)];
    }
    b[strlen(a)]='\0';
    printf("%s",b);
}