#include<stdio.h>
#include<string.h>
void fun(char c[]){
    int length=strlen(c);
    for(int i=0;i<length;i++){
        printf("%c ",c[i]);
    }  
}
int main()
{
  char c[20]="Zahidul";
  fun(c);
}