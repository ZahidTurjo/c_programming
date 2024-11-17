#include<stdio.h>
void seq(int x,int n){
    if(x>n){
        return ;
    }
     printf("%d\n",x);
    seq(x+1,n);
}
int main()
{
    int n;
    scanf("%d",&n);
    
    int a=1;

  seq(a,n);
}