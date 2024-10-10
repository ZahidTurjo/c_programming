#include<stdio.h>
int main()
// {
//     char ch;
//     scanf(" %c",&ch);
//     if(ch>='0'&& ch<='9'){
//         printf("IS DIGIT\n");
//     }else{
//         printf("ALPHA\n");
//         if(ch>='A' && ch<='Z'){
//             printf("IS CAPITAL\n");
//         }else if(ch>='a' && ch<='z'){
//             printf("IS SMALL\n");
//         }
//     }
// }
{
    int a =5,b=1,c=3;
    if(a>b && b>c){
        printf("%d",a);
    }else if (b>a && c>b){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
}

