#include <stdio.h>
int search(const int list[], int n, int x);
int main(void)
{
    int i, index, n, res, x;
    int repeat, ri;
    int a[10];
    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
        scanf("%d", &x);
        /*---------*/
        res = search(a, n, x);
        if(res != -1)
            printf("index = %d\n", res);
        else
            printf("Not found\n");
    }
    return 0;
}
int search(const int list[], int n, int x)
{
    int i = 0;
    while (i != n && list[i] != x)
        ++i;
    if (i == n)
        return -1;
    return i;
}
/*---------*/