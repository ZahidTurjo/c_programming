#include <stdio.h>

int main() {

    char source[50];
    scanf("%s",source);
    char destination[50];  // Ensure the destination array is large enough
    int i;

    // Copying manually
    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0';  // Null-terminate the destination string

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
