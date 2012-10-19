#include <stdio.h>

double power(double k, int n)
{
	double result = 1;
	while (n != 0)
	{
		result *= k;
		--n;
	}
	return result;
}
int main(void)
{
    int i, n;
    int repeat, ri;
    double mypow, x;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf%d", &x, &n);
		/*---------*/
        mypow = power(x, n);
        printf("%.2f\n", mypow);
   }
}