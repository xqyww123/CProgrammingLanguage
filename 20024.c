
#include <stdio.h>
#include <math.h>
int main(void)
{
    int repeat, ri;
    float x, y;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
	    scanf("%f", &x);
        printf("f(%.2f) = %.2f\n", x, (x>=0)?sqrt(x):(x+1)*(x+1) + 2*x + 1/x);
    }
}
