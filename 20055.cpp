#include <stdio.h>
int main(void)
{
    int repeat, ri;
    double x, y;  

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf", &x); 
        printf("f(%.2f) = %.3f\n", x, (x==0?0:1.0/x));
    }
}
