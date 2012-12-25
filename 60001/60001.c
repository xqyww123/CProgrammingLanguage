#include <stdio.h>
double fact(int n);
double multi(int n);  
double PI(double e);
int main(void)
{   
    int i; 
    int repeat, ri;
    double eps, sum, item;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%le", &eps);
        /*---------*/
        sum = PI(eps);
        printf("PI = %0.5f\n", 2 * sum);
    }
    return 0;

}

double abs(double k)
{
    return k > 0 ? k : -k;
}

double PI(double e)
{
    double sum = 1;
    int i = 1;
    for(i = 1; ; ++i)
    {
        double temp = fact(i) / multi((i << 1) + 1);
        sum += temp;
        if (abs(temp) < abs(e))
            return sum;
    }
    return sum;
}

double fact(int x)
{
    double k = 1;
    int i = 0;
    for (i = 1; i <= x; ++i)
        k *= i;
    return k;
}

double multi(int n)
{
    double k = 1;
    int i = 0;
    for (i = 1; i <= n; i += 2)
        k *= i;
    return k;
}
/*---------*/

/*---------*/