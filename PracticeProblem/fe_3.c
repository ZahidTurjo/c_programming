#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){

        scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<1;i++){
        for(int j=0;j<m;j++){
            int temp=a[i][j];
            a[i][j]=a[n-(i+1)][j];
            a[n-(i+1)][j]=temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<1;j++){
        int temp=a[i][j];
        a[i][j]=a[i][m-1];
        a[i][m-1]=temp;
        }
    }
 
     
    
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){

        printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}