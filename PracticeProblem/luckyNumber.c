#include<stdio.h>
int main(){
    int N ,first_digit,second_digit;
    scanf("%d",&N);
    first_digit=N/10;
    second_digit=N%10;
    if((first_digit != 0 && second_digit%first_digit==0) || (second_digit !=0 && first_digit%second_digit==0)){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

}