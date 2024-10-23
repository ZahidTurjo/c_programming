// Given two strings A and B. Print three lines contain the following:

// The size of the string A and size of the string B separated by a space
// The string produced by concatenating A and B (A + B).
// The two strings separated by a single space respectively, after swapping their first character.
#include<stdio.h>
#include<string.h>
int main()
{
    char A[11];
    char B[11];
    char C[22];
    int temp;
    int i;
    scanf("%s %s",A,B);
  
    
    printf("%d %d\n",strlen(A),strlen(B));
    for( i =0;A[i]!='\0';i++){
        C[i]=A[i];
    }
    C[i]='\0';
  printf("%s\n",strcat(C,B));
    
    temp=A[0];
    A[0]=B[0];
    B[0]=temp;
  printf("%s %s",A,B);
}