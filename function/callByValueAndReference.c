#include<stdio.h>
void func(int x,int *y){
       x*=10;
       (*y)*=10;
       printf("inside function:%d %d\n",x,*y);

}

int main()
{
    int a=10,b=20;
    func(a,&b);    //here a is the value(call by value) and b is the reference(call by reference)
    printf("%d %d",a,b); //here update the value of b

}