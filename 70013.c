#include <stdio.h>
int main(void)
{
    int i, n, temp;
    int repeat, ri;
    int a[10];

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
/*---------*/
        for(i = n-1; i >= 0; i--)
            printf("%d ", a[i]);
        printf("\n");
    }
}
