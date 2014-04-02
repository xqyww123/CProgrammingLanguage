#include <stdio.h> 
int main(void)
{
    int repeat, ri;
    double x, y; 

    scanf("%d", &repeat);
    for(ri = 1;ri <= repeat; ri++){  
        scanf("%lf", &x);
        y = (x<0)?0:((x<=15)?(4*x/3):(2.5*x-10.5));
/*---------*/
        printf("f(%.2f) = %.2f\n", x, y); 
    }
    return 0;
}
