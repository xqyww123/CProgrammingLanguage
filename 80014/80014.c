#include<stdio.h>
int main(void)
{
    int count, i, m, n, no;
    int num[50];
    int *p;

    scanf("%d%d", &n, &m);
    for(i = 0; i < n; i++)
        num[i] = i + 1;
    p = num;
    /*---------*/
    for (count = 1; count != n; ++count)
    {
        for (i = 0; i != m; ++i)
        {
            while (*p == 0)
            {
                p++;
                if (p == num + n)
                    p = num;
            }
            p++;
            if (p == num + n)
                p = num;
        }
        p--;
        if (p < num)
            p = num + n - 1;
        printf("No%d: %d\n", count, *p);
        *p = 0;
        p++;
        if (p == num + n)
                p = num;
    }
    p = num;
    while(*p == 0)
        p++;
    printf("Last No is: %d\n", *p);
    return 0;
}