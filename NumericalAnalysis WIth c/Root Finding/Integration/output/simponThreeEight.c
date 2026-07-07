#include<stdio.h>

double f(double x){
    return x*x;
}

int main(){
  double a ,b,h,sum=0;
  int n;
  printf("Enter the lower Limit : ");
  scanf("%lf",&a);
  printf("Enter the upper Limit : ");
  scanf("%lf",&b);
  printf("Enter the interval : ");
  scanf("%d",&n);

  h=(b-a)/n;
  sum=f(a)+f(b);
  for(int i=1;i<n;i++){
    if(i%3==0)sum+=2*f(a+i*h);
    else sum+=3*f(a+i*h);
  }
  sum=(3*h/8)*sum;
  printf("Integral = %.6lf",sum);
}