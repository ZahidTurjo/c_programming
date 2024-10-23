#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if('a'<=ch && 'z'>=ch){
        printf("%c",ch-32);
    }
    else if('A'<=ch && 'Z'>=ch){
        printf("%c",ch+32);
    }
}