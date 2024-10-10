#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a=5, b=7,c=5;
    bool isEqual= a==b;
    bool isEqual2= a==c;
    bool lessthan = a>b;
    bool lessthan2 = a<b;
    printf("%d\n",isEqual);
    printf("%d\n",isEqual2);
    printf("%d\n",lessthan);
    printf("%d\n",lessthan2);
    
    
    return 0;
}