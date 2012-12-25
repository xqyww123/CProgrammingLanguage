#include "stdio.h"
#include "math.h"

int fib[500] = {0};
int main(void)
{
   int i, m, n;
   int repeat, ri;
   long f;
   long fibb(int n);

   scanf("%d",&repeat);
   for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &m, &n);
        /*---------*/
        for(i = 1;; ++i)
        {
            int temp = fibb(i);
            if (temp > n)
                break;
            if (temp < m)
                continue;
            printf("%d ", temp);
        }
        printf("\n");
    }
}

long fibb(int k)
{
    if (fib[k] != 0)
        return fib[k];
    if (k == 1 || k == 2)
        return 1;
    return fibb(k - 1) + fibb(k - 2);
}
/*---------*/