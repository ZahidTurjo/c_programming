#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    int len=strlen(s);
    int f[26]={0};
    for(int i=0;i<len;i++){
        f[s[i]-'a']=1;
    }
    for(int i=0;i<26;i++){
      if(f[i]==1){ printf("%c",i+'a');}
    }

}