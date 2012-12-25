#include "stdio.h"
#include <math.h>
double funcos(double e, double x);
double abs(double k)
{
    return k > 0 ? k : -k;
}
int main(void)
{
    int repeat, ri;
    double e, sum, x; 

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%le%le", &e, &x);
        /*---------*/
        sum = funcos(e, x);
        printf("sum = %f\n", sum);
    }
    return 0;
}

double foo(double x)
{
    double k = 1;
    int i = 0, q = x + 0.1;
    for (i = 1; i <= q; ++i)
        k *= i;
    return k;
}
double funcos(double e, double x)
{
    int i ;
    double sum = 0;
    for (i = 0; ; ++i)
    {
        double temp = pow(x, i << 1) / foo(i << 1);
        sum += i % 2 == 0 ? temp : -temp;
        if (abs(temp) < abs(e))
            return sum;
    }
    return sum;
}

/*---------*/