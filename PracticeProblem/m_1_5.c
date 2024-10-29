#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1001];
    char s2[1001];
    char s3[1001];
    scanf("%s %s %s",s1,s2,s3);
    int camp1=strcmp(s1,s2);
    int camp2=strcmp(s1,s3);
    int camp3=strcmp(s2,s3);
    int camp4=strcmp(s2,s1);

    if(camp1<0 && camp2<0){
        printf("%s\n",s1);
    }
    else if(camp3<0 && camp4<0){
        printf("%s\n",s2);
    }else{
        printf("%s\n",s3);
    }

    if(camp1>0 && camp2>0){
        printf("%s\n",s1);
    }
    else if(camp3>0 && camp4>0){
        printf("%s\n",s2);
    }else{
        printf("%s\n",s3);
    }


  

}