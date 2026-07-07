//Estimate the value of y at a given point using the Newton Forward Interpolation formula (construct the forward difference table); find y(1.5) for the data
//x = 0,1,2,3 and y = 1,2,4,8
#include<stdio.h>
int main()
{
    double x[10],y[10][10],h,p,result,term,value;
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)scanf("%lf",&x[i]);
    for(int i=0;i<n;i++)scanf("%lf",&y[i][0]);

    for(int j=1;j<n;j++){
        for(int i=0;i<n-j;i++){
            y[i][j]=y[i+1][j-1]-y[i][j-1];
        }
    }
    printf("\ntable\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf("%10.4lf",y[i][j]);
        }
        printf("\n");
    }
    printf("\nvalue:");
    scanf("%lf",&value);
    h=x[1]-x[0];
    p=(value-x[0])/h;

    result=y[0][0];
    term=1.0;
    for(int i=1;i<n;i++){
        term*=(p-(i-1))/i;
        result+=term*y[0][i];
    }
    printf("\nResult=%.4lf\n",result);
    //Result=2.8125



}
