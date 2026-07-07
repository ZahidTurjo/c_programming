#include<stdio.h>
#include<math.h>
int main()
{
    double x,xo,er,f,df;
    printf("Enter the initial guess: ");
    scanf("%lf",&xo);
    int i=0;
    do{
        f=cos(xo)-xo;
        df=-sin(xo)-1;
        x=xo-(f/df);
        er=fabs(x-xo);
        printf("i=%d x=%.4lf er=%.4lf\n",i+1,
               x,er);
               xo=x;
               i++;
    }while(er>0.0001);
    printf("Root= %.4lf",x);
    //Root= 0.7391

}

