#include <stdio.h>
int main(void)
{    
    int n;
    double factorial;
    double fact(int n);

    scanf ("%d", &n);
    int i=0; float re = 1; for (i=1;i<=n;++i) re *= i;
    printf("%d! = %f\n", n, re);
}
