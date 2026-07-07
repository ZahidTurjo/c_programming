#include<stdio.h>
double f(double x){
    return x*x;
}
int main()
{
    printf("Program Started\n");
    double a,b,h,sum=0;

    int n,i;
    printf("Enter the lower Limit: ");
    scanf("%lf",&a);
    printf("Enter the upper Limit: ");
    scanf("%lf",&b);
    printf("Enter the interval: ");
    scanf("%d",&n);

    h=(b-a)/n;
    sum=f(a)+f(b);

    for(int i=1;i<n;i++){
        sum+=2*f(a+i*h);
    }
    sum=(h/2)*sum;
    printf("Intergral=%.6lf",sum);
    return 0;
}
