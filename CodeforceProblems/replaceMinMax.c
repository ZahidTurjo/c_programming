#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i =0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int min=0;
    int max=0;
    int temp;
    

    for(int i =0;i<N;i++){
        if(a[i]<a[min]){
            min=i;
        }
        if(a[i]>a[max]){
           max=i;
        }
    }
      temp=a[min];
      a[min]=a[max];
      a[max]=temp;
      for(int i =0;i<N;i++){
        printf("%d ",a[i]);
      }


}