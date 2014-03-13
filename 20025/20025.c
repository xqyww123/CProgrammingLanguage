#include <stdio.h>

int main(void) {
    int repeat, ri;
    double x, y;

    scanf("%d", &repeat);
    for (ri = 1; ri <= repeat; ri++) {
/*---------*/
        scanf("%lf", &x);
        if (x == 10) y = 1/x;
        else y = x;
        printf("f(%.1f) = %.1f\n", x, y);
    }
    return 0;
}

