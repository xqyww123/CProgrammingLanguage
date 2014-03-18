#include <stdio.h>
int main(void)
{
    int repeat, ri;
    double rate, salary, tax;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf", &salary);
/*---------*/\
        tax = (salary<=850)?0:((salary<=1350)?0.05*(salary-850):((salary<=2850)?0.1*(salary-850):((salary<=5850)?0.15*(salary-850):(0.2*(salary-850)))));
        printf("tax = %0.2f\n", tax);
    }
}
