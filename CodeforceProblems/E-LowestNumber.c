#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i = 0;i<N;i++){
        scanf("%d",&A[i]);
    }
    int min=A[0];
    int min_index=0;
    
    for (int i = 0; i <N; i++)
    {
       if(A[i]<min){
        min=A[i];
        min_index=1+i;
        
       }
    }
    if(min == A[0]){
        printf("%d %d",min,min_index+1);
    }else{

    printf("%d %d",min, min_index);
    }
    
}