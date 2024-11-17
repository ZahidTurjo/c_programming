#include<stdio.h>
#include<string.h>
int main()
{
    char s1[101];
    char s3[101];
    char s2[101];
    scanf("%s %s %s",&s1,&s2,&s3);
    
     int count=0;
    for(int i=0; s1[i]!='\0';i++){
     if(s1[i] == s2[i] && s1[i] == s3[i]){
         count+=0;
    }else if(s1[i] ==s2[i] && s1[i] !=s3[i]){
         count +=1;
    }else if(s1[i] !=s2[i] && s1[i] == s3[i]){
        count +=1;
    }else if(s1[i] !=s2[i] && s1[i] !=s3[i]){
        count +=2;
    }
     }
printf("%d",count);


}