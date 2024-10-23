#include <stdio.h>

int main() {
    int A, B;
    char S;

    // Read input in the format A, S, B
    scanf("%d %c %d", &A, &S, &B);

    // Compare based on the symbol
    if (S == '<') {
        if (A < B) {
            printf("Right\n");
        } else {
            printf("Wrong\n");
        }
    } else if (S == '>') {
        if (A > B) {
            printf("Right\n");
        } else {
            printf("Wrong\n");
        }
    } else if (S == '=') {
        if (A == B) {
            printf("Right\n");
        } else {
            printf("Wrong\n");
        }
    }

    return 0;
}
