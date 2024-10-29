#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="apple";
    int f[26]={0};
    int len=strlen(str);
    for(int i=0;i<len;i++){
        char ch =str[i];
        int index=ch-'a';
        f[index]=1;
    }
    for(int i =0;i<26;i++){
        printf("%d",f[i]);
    }
}



