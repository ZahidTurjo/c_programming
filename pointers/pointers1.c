#include<stdio.h>
int main()
{
//   int x=10;
//   int *p=&x;
//   int y=20;
//   *p=++y;
//   x++;
//   printf("%d",x);
int x,y,z;
x=10,y=20,z=30;
int *p,*q;
p=&x;
q=&y;
x=50;
q=p;
printf("%d",*q);
printf("\n%d",q);
printf("\n%d",p);
}