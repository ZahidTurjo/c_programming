#include<stdio.h>
#include<math.h>
int main(){

    double x,xo,er;
    printf("Give the initial Guess : ");
    scanf("%lf",&xo);
    int i=0;
    do{
        //f(x)=cosx

        x=cos(xo);

        er=fabs(x-xo);
        printf("Iteration: %d x= %.6lf err= %.6lf\n",i+1,x,er);

        xo=x;
        i++;

    }while(er>0.0001);
    printf("\nRoot= %.6lf",x); //output Root= 0.739123

}
