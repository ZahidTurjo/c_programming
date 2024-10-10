#include<stdio.h>
int main(){
    for ( char c ='A'; c<='F';c++){
        for (char b='A';b<=c;b++){
            printf("%c",c);
        }
        printf("\n");
    }
}