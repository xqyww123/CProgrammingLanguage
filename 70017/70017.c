#include <stdio.h>
int main(void)
{
    int flag, i, n, x;
    int repeat, ri;
    int a[10];

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){    
        flag = 0;
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
        scanf("%d", &x);
        /*---------*/
        for (i = 0; i != n; ++i)
            if (a[i] == x) 
            {
                flag = 1;
                break;
            }
        if(flag != 0)
            printf( "%d: a[%d]\n", x, i); 
        else
            printf( "%d: not found\n", x);

    }
}