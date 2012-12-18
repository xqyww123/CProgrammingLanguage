#include <stdio.h>
void mov(int *x, int n, int m);
int main(void)
{
    int i, m, n;
    int a[80];

    scanf("%d%d", &n, &m);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    /*---------*/
    mov(a, n, m);
    printf("After move: ");
    for(i = 0; i < n; i++)
         printf("%d ", a[i]);
    printf("\n"); 
    return 0;
}

void mov (int *x, int n, int m)
{
    int i, j;
    int *p = x;
    /*
    while (m--)
    {
        int temp = *(x + n - 1);
        p = x + n - 1;
        while (p != x)
        {
            *p = *(p - 1);
            p--;
        }
        *x = temp;
    }*/
    for (i = 0; i != m; ++i)
    {
        int temp = x[n - 1];
        for (j = n - 1; j != 0; --j)
        {
            x[j] = x[j - 1];
        }
        x[0] = temp;
    }
}
/*---------*/