#include <stdio.h>
#include <math.h>

int main()
{
    double x, xo, er;
    int i = 0;


    printf("Enter initial guess: ");
    scanf("%lf", &xo);

    do {
        //f(x)=x^3+x-1
        x = cbrt(1.0-xo);

        er = fabs(x - xo);
        printf("It= %d x= %.4lf er=%.4lf\n", i + 1, x, er);
        xo = x;
        i++;

    } while(er > 0.0001);

    printf("\nRoot=%.4lf\n", x); //Root=0.6824
    return 0;
}
