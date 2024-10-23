#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int count_zero=0;
    int count_one=0;
    for(int i =0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<N;i++){
        if(arr[i]==0){
            count_zero=count_zero+1;
        }
        else{
            count_one=count_one+1;
        }
    }
    printf("%d %d",count_zero,count_one);
  
}
