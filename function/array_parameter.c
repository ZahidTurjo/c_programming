#include<stdio.h>
void fun(int x[]){
for(int i =0;i<5;i++){
    printf("%d ",x[i]);
}
}
int main()
{
    int a[5]={1,2,3,4,5};
    fun(a);

}