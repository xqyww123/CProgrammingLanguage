#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(void)
{
    int i, index, n, t;
    int repeat, ri;
    int a[10];

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
            /*---------*/
        for (i = 0; i != n; ++i)
        {
            if (a[0] > a[i]) 
                swap(&a[0], &a[i]);
            if (a[n - 1] < a[i])
                swap(&a[n - 1], &a[i]);
        }
        printf("After swap: ");
        for(i = 0; i < n; i++) 
            printf("%d ", a[i]);
        printf("\n");
    }
}