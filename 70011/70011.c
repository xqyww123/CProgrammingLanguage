#include <stdio.h>
int main(void)   
{
    int i, j, n, x;
    int repeat, ri;
    int a[10];

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
        scanf("%d", &x);
        /*---------*/
        i = 0;
        while (x > a[i] && i != n) 
        {
            ++i;
        }
        for (j = n; j >= i; --j )
        {
            a[j] = a[j - 1];
        }
        a[i] = x;
        for(i = 0; i < n + 1; i++)
            printf("%d ", a[i]);
        putchar('\n');   
    }
}