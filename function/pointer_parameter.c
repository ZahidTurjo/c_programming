// #include<stdio.h>
// void fun(int *x,int y){
//     for(int i=0;i<y;i++){
//         x[i]*=2;
//     }
// }
// int main()

// {
//     int a[5]={1,2,3,4,5};
//     int  n=5;
//     fun(a,n);
//         for(int i=0;i<n;i++){
//         printf("%d ",a[i]);
//         }
// }


#include<stdio.h>
void fun(char c[]){
    c[0]='Z';
    printf("%s",c);
}
int main(){
    char c[]="turjo";
    fun(c);
    printf("%s",c);
}