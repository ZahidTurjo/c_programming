#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    char s1[1001];
    scanf("%s %s",s,s1);
    int len1=strlen(s);
    int len2=strlen(s1);
if(len1 !=len2){
    printf("NO");
    return 0;
} 
int f1[26]={0};
int f2[26]={0};
for(int i =0;i<len1;i++){
    f1[s[i]-'a']+=1;
    f2[s1[i]-'a']+=1;
}
for(int i =0;i<26;i++){
    if(f1[i] != f2[i]){
        printf("NO");
        return 0;
    }
}
printf("YES");
}