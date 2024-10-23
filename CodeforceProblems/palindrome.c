#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=n-1,j=0;i>=0;i--,j++){
        if(a[i]==a[j]){
           continue;
        }else{
            printf("NO");
            break;
        }

    }
printf("YES");

}