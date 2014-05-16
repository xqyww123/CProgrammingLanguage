#include "stdio.h"
#include "math.h"
double funcos(double e, double x);
int main(void)
{
    int repeat, ri;
    double e, sum, x; 

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%le%le", &e, &x);
	double a=1, b=1; sum = 0;
	int f = 1, i;
	for (i=0;1;++i)
	{
		double now = a/b*f;
		sum += now;
		a*= x*x;
		b *= (i+i+1)*(i+i+2);
		f *= -1;
		if (fabs(now) < e) break;
	}
        printf("sum = %f\n", sum);
    }
}

/*---------*/
