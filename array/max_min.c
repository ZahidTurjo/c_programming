#include<stdio.h>
int main()
{
    int N;
    
    scanf("%d",&N);
    int a[N];
    for(int i =0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int min=a[1];
    int max=a[1];
    for (int i=0;i<N;i++){
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]>max){
            max=a[i];
        }
    }
printf("max:%d , min:%d",max,min);
}