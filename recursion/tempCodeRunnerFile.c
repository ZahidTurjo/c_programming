#include<stdio.h>
void nTo_1(int i){
    if(i== 0){
        return;
    }
    printf("%d ",i);
    nTo_1(i-1);
    }
int main()
{

int n;
scanf("%d",&n);
nTo_1(n);
}