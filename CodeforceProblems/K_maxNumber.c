#include<stdio.h>
void max_number(int a [],int i,int n,int max){
  
   if(i == n){
     printf("%d",max);
    return;
   }
    
    if(max<a[i]){
        max=a[i];
       
    }
     max_number(a,i+1,n,max);
   


}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }

   max_number(a,0,n,a[0]);

}