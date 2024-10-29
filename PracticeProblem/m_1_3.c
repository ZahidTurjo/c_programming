#include<stdio.h>
int main(){
    int n,x,y;
    scanf("%d %d %d",&n,&x,&y);
    int a[n];
    long long int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i =0;i<n;i++){
        if(x<=a[i] && a[i]<=y){
            
           count=count+1;
        }
    }
    printf("%lld",count);
}