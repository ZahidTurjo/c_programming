#include<stdio.h>
int main()
{    
    int T;
    scanf("%d",&T);
    int X,Y;
    for(int i=0;i<T;i++){
        scanf("%d %d",&X,&Y);
        int sum=0;
        if(X<Y){
        for(int i =X+1;i<Y;i++){
           
            if(i%2 !=0){
                sum=sum+i;
            }
        }
       
        }
        else{
        for(int i =X-1;i>Y;i--){
             if(i%2 !=0){
                sum=sum+i;
            }
        }
    }
 printf("%d\n",sum);
    }
    
    
}