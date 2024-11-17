#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=4;
    long long a[n][m];
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%lld",&a[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        long long product=1;
        for(int j=1;j<m;j++){
           if(a[i][j] == 0){
            printf("-1\n");
            break;
           }
            product*=a[i][j];
           
        }

    
       
           if(product == 0){
                 printf("-1\n");
                 continue;
           }
            long long result=a[i][0]/product;
       if((result*product) == a[i][0]){
            printf("%lld\n",result);
           }else{
            printf("-1\n");
           }
    }
}