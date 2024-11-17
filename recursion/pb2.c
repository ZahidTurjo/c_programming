#include<stdio.h>
void recursion(int i,int n){
if(i>n){
    return;
}
printf("I love Recursion\n");
recursion(i+1,n);

}
int main()
{
    int i=1;
    int n;
    scanf("%d",&n);
 recursion(i,n);
}