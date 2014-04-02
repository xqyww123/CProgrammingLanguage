#include <stdio.h>
#include <math.h>
int main(void)
{
    int denominator, flag;
    int repeat, ri;
    double eps, item, sum;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%le", &eps);
        sum = 1;
        item = 1;
        while (1.0/(double)item >= eps) {
            sum += 1.0 / (double)item;
        }
/*---------*/
      	printf("sum = %.6f\n", sum);
    }
    return 0;
}
