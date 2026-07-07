//Estimate the value at x = 35 using Newton backward interpolation, given x
//= 10,20,30,40 and y (distance) = 100,400,900,1600


/*
input:
4
10 20 30 40
100 400 900 1600
*/
#include<stdio.h>
int main()
{
    double x[10],y[10][10],h,p,term,result,value;
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)scanf("%lf",&x[i]);
    for(int i=0;i<n;i++)scanf("%lf",&y[i][0]);

    for(int j=1;j<n;j++){
        for(int i=n-1;i>=j;i--){
            y[i][j]=y[i][j-1]-y[i-1][j-1];
        }
    }

    printf("\nTable\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%10.4lf",y[i][j]);
        }
        printf("\n");
    }

    printf("\Value: ");
    scanf("%lf",&value);
    h=x[1]-x[0];
    p=(value-x[n-1])/h;
    term=1.0;
    result=y[n-1][0];

    for(int i=1;i<n;i++){
        term*=(p+(i-1))/i;
        result+=term*y[n-1][i];
    }
    printf("\nResult= %.4lf\n",result);
    //Result= 1225.0000
}


