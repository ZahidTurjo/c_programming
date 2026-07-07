#include<stdio.h>

int main()
{
    int n=4;

    double x[5]={0,1,2,3,4};

    double y[5]={1,2,3,10,17};

    double h=1;

    double sum=y[0]+y[n];

    int i;

    for(i=1;i<n;i++)
    {
        if(i%3==0)
            sum+=2*y[i];
        else
            sum+=3*y[i];
    }

    double integral=(3*h/8)*sum;

    printf("Integral = %.3lf",integral);

    return 0;
}