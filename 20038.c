#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, n;
    int repeat, ri;
    double mypow, x;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf%d", &x, &n);
        printf("%.2f\n", pow(x, n));
   }
}
