#include<stdio.h>
int main()
{
    double x[10],y[10][10],h,term,result,value,p;
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("\nEnter the value of x:\n");
    for(int i=0;i<n;i++){
        scanf("%lf",&x[i]);
    }

    printf("\nEnter the value of y:\n");
    for(int i =0;i<n;i++){
        scanf("%lf",&y[i][0]);
    }
    //backward diff table
    for(int j=1;j<n;j++){
        for(int i=n-1;i>=j;i--){
            y[i][j]=y[i][j-1]-y[i-1][j-1];
        }
    }
    printf("\n Backward Table:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%10.4lf",y[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the interpolation point:");
    scanf("%lf",&value);

    h=x[1]-x[0];
    p=(value-x[n-1])/h;
    result=y[n-1][0];
    term=1.0;
    for(int i=1;i<n;i++){
        term*=(p+(i-1))/i;
        result+=term*y[n-1][i];
    }
    printf("\nEstimated Result= %.4lf",result);
    return 0;
}
