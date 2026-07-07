#include<stdio.h>
double f(double x){
    return x*x;
}
int main()
{
    double a,b,h,sum=0;
    int n;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    h=(b-a)/n;
    sum=f(a)+f(b);

    for(int i=1;i<n;i++){
        if(i%2==0)sum+=2*f(a+h*i);
        else sum+=4*f(a+h*i);
    }
    sum=(h/3)*sum;
    printf("Intergral=%.6lf",sum);
}