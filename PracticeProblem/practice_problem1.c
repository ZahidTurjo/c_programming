#include <stdio.h>


int main() {
// int A,B;
// scanf("%d",&A);
// scanf("%d",&B);
// printf("%d",A+B);
//     return 0;
int money;
scanf("%d",&money);
if(money>=1000){
    printf("Three Kacchi");
}
else if(money<1000 && money>=500){
    printf("One Large Pizza");
}else if(money<500 && money>=250){
    printf("Three Small Burger");
}
else if(money<250 && money >=100){
    printf("Three Fuchka");
}else if(money<100){
    printf("Nothing");
}
return 0;
}