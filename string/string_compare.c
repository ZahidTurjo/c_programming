#include<stdio.h>
#include<string.h>
int main()
{

    char a[21];
    char b[21];
    scanf("%s %s",a,b);
    int camp=strcmp(a,b);
    if(camp<0){
        printf("%s\n",a,b);
    }else{
            printf("%s\n",b);
    }
}