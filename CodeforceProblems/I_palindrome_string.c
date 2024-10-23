#include<stdio.h>
#include <string.h>
int main()
{
    int length=0;
    char str[1000];
    scanf("%s",&str);
  
    
    length=strlen(str);
   
    for(int i=length-1,j=0;i>=0;i--,j++){
       if(str[j]==str[i]){
        continue;
       }else{
        printf("NO");
        return 0;
       }
}
printf("YES");
}