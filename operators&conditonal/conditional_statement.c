#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    if (number<100 && number>=80){
        printf("A+");
    }
    else if (number<80 && number>=70){
        printf("A");

    }
    else if (number<70 && number>=60){
        printf("B");
    }
    else{
        printf("Fail");
    }
    return 0;
}