#include <stdio.h>
#include <math.h>
int main(void)
{
    int repeat, ri;
    double x, y;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
		scanf("%lf",&x);
		y = x >= 0 ? sqrt(x) : pow(x + 1, 2) + 2 * x + 1 / x;
        printf("f(%.2f) = %.2f\n", x, y);	
    }
}