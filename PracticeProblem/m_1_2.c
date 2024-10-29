#include<stdio.h>
int main(){
    int n,t;
    scanf("%d %d",&n,&t);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    long long int sum=0;
    long long int no_books=0;
    for(int i=0;sum+a[i]<=t;i++){
       
           sum=sum+a[i];
           no_books=no_books+1;
       

    }

    printf("%lld",no_books);
 
}