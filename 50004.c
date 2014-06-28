#include <stdio.h>
#include <math.h>
double dist(double x1, double y1, double x2, double y2);
int main(void)
{
    int repeat, ri;
    double distance, x1, y1, x2, y2;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
 /*---------*/
        printf("Distance = %.2f\n", sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
    }
}

