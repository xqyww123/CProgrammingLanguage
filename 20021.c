#include <stdio.h>
int main(void)
{
    int repeat, ri;
    double x, y;  

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf", &x);
        printf("f(%.2f) = %.1f\n", x, x?1/x:0);
     }
}
