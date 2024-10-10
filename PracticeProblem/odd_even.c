#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("Its positive\n");
        if(a%2==0){
            printf("Even\n");
        }
        else{
            printf("Odd");
        }
    }else if(a<0){
        printf("Its Negative\n");
        if(a%2==0){
            printf("Even\n");
        }
        else{
            printf("Odd");
    }
    
}

}