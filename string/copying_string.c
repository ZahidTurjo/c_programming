#include<stdio.h>
#include<string.h>
int main()
{
    char a[10]="adaf";
    char b[10];
    for(int i =0;a[i]!='\0';i++){
        b[i]=a[i];
    }
    b[strlen(a)]='\0';
    printf("%s",b);
}