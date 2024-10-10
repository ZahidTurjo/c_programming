#include <stdio.h>

int main() {
    int age = 25;
    int income = 45000;

    if (age < 18) {
        printf("You are a minor.\n");
    } else {
        if (income < 30000) {
            printf("You are an adult with a low income.\n");
        } else {
            if (income < 60000) {
                printf("You are an adult with a moderate income.\n");
            } else {
                printf("You are an adult with a high income.\n");
            }
        }
    }

    return 0;
}
