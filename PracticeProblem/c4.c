#include<stdio.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int f[26]={0};
    for(int i=0;s[i]!='\0';i++){
      f[s[i]-'a']+=1;
    }
    int count=0;
    for (int i=0;i<26;i++){
         if(f[i]%2 !=0){
           count++;
         }
    }
    if(count>1){
        printf("%d",count-1);
    }else{
        printf("0");
    }
}