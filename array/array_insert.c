#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int value, index;
    scanf("%d %d",&index,&value);
    n++;
    for(int i =n-1;i>=index;i--){
        a[i]=a[i-1];
    }
    a[index]=value;
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    
}