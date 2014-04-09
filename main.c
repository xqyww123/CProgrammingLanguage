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
	sum =  pow(2, n+1) - 2.0;
        printf("sum = %.0f\n", sum);
    }
}
