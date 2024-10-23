// Given a number N and an array A of N numbers.
//  Determine if the array is lucky or not.
//  Note: the array is lucky if the frequency
// (number of occurrence) of the minimum element is odd.
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i =0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int min=a[1];
    int count=0;
    for(int i =0;i<N;i++){
        if(a[i]<min){
            min=a[i];
        }
    }

    for(int i =0;i<N;i++){
        if(a[i] == min){
            count+=1;
        }
    }

    if(count%2==0){
        printf("Unlucky");
    }else{
        printf("Lucky");
    }
}