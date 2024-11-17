// #include<stdio.h>
//  int sum=0;
// void arraySum( int a[],int x){
//     if(x>2){
//         return;
//     }
   
//     sum+=a[x];
//     printf("%d\n",sum);
//     arraySum(a,x+1);
     
// }
// int main()

// {
// int a[]={1,2,3};
// arraySum(a,0);
// }


#include<stdio.h>
int a[1000],sum=0;
void goToIndex(int i, int n){
if(i == n){
    return;
}
sum+=a[i];
goToIndex(i+1,n);
}
int main()
{
    int n;
    scanf("%d",&n);
for(int i =0;i<n;i++){
    scanf("%d",&a[i]);
}
goToIndex(0,n);
 printf("%d",sum);

}


























