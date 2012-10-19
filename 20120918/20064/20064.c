#include <stdio.h>
#include <math.h>
int main(void)
{
    int i,n;
    int repeat, ri;
    double sum;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
		/*---------*/
		sum = 0;
		for (i = 1; i != n + 1; ++i)
		{
			sum += pow(2,i);
		}
        printf("sum = %.0f\n", sum);
    }
}